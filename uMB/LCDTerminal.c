/******************************************************************************
 *
 *   Terminal Emulation on MikroE PIC24 Mikromedia LCD display
 *
 *   API compatible with Explorer16 2x16 LCD interface 
 *******************************************************************************

* File Name:       LCDterminal.c

*******************************************************************************/

#include <string.h>
#include "LCDTerminal.h"


extern const FONT_FLASH FONT_DEFAULT;


static int _cx, _cy;    // cursor position
static int _back = LCD_BACK , _fore = LCD_FORE;

#ifdef LCD_SCROLL
// text page char matrix
static char page[ _MAX_Y][ _MAX_X+1];
#endif


int LCDGetX()
{ 
    return _cx;
}


int LCDGetY()
{ 
    return _cy;
}


void LCDSetColor( int x)
{
    _fore = x;
}    


void LCDSetBackground( int x)
{
    _back = x;
}    


int LCDGetColor()
{
    return _fore;
}


int LCDGetBackground()
{
    return _back;
}


void LCDHome(void)
{   // set cursor to home position
    _cx = 0; 
    _cy = 0;
}


void LCDSetXY( int x, int y)
{
    _cx = x; _cy = y;
}


#define LCDL1Home   LCDHome

void LCDL2Home(void)
{
    _cx = 0;
    _cy = 1;
}

void LCDLineHome(void)
{   
    _cx = 0;
}    

void LCDClearToEOL( void)
{
    int t = _cx;
    int i;
    
    // fill with spaces until the end of the line
    for( i=_cx; i< _MAX_X; i++)
        LCDPut( ' ');   
        
    // return to position
    _cx = t;    
}

void LCDClear(void)
{
#ifdef LCD_SCROLL    
    int i,j;
    for (i=0; i< _MAX_X; i++)
        for( j=0; j<_MAX_Y; j++)
            page[j][i] = ' ';
#endif
            
    SetColor( _back); 
    ClearDevice();
    SetColor( _fore); 
    LCDHome();
}

void LCDInit(void)
{
    InitGraph();    // initialize graphics library
    LCDClear();
    SetFont( (void *) &FONTDEFAULT);          // set font
}


void LCDShiftCursorLeft(void)
{
    if (_cx>0) 
        _cx--;
}


void LCDShiftCursorUp(void)
{
    if ( _cy>0) _cy--;
}


void LCDShiftCursorDown(void)
{    
    // advance to next line
    _cy++;

#ifdef  LCD_SCROLL
    if ( _cy >= _MAX_Y) 
    {   // scroll entire screen up
        int i,j;
        for( j=0; j<_MAX_Y-1; j++)
        {   // for each line
            // clear the line background (indipendent from LCD_OVERLAY)    
            SetColor( _back); 
            Bar( 0, FONT_H*j, GetMaxX()-1, FONT_H*(j+1));
            SetColor( _fore); 
            // copy from next line print the new line content
            for( i=0; i<_MAX_X; i++)
            {
                page[j][i] = page[j+1][i];    
                MoveTo( FONT_W*i, FONT_H*j); OutChar( page[j][i]);
            }    
        }

        // limit to last line
        _cy = _MAX_Y-1;

        // clean up the last line
        SetColor( _back);
        Bar( 0, FONT_H*_cy, GetMaxX()-1, FONT_H*(_cy+1));
        for( j=0; j<_MAX_X; j++) page[_cy][j]=' ';
        SetColor( _fore); 

    }
#else   // no scrolling option roll
    if ( _cy >= _MAX_Y) 
    {
        _cy = 0;
    }    

#endif        
}


void LCDShiftCursorRight(void)
{
    _cx++;
#ifdef LCD_WRAP
    if ( _cx >= _MAX_X) 
    {   // wrap to a new line
        _cx = 0;    
        LCDShiftCursorDown();
    }    
#endif
}


void LCDPut(char A)
{
        
#ifdef LCD_SCROLL
        page[ _cy][ _cx] = A;
#endif

#ifndef LCD_OVERLAY
    // clear the background
    SetColor( _back); 
    Bar( _cx*FONT_W, _cy*FONT_H, (_cx+1)*FONT_W, (_cy+1)*FONT_H);
    SetColor( _fore); 
#endif

    if(( _cx<_MAX_X) && (_cy<_MAX_Y))   // clip
    { // print the new character
        MoveTo( FONT_W * _cx, FONT_H*_cy);
        OutChar( A);
        LCDShiftCursorRight();
    }
} // LCDPut


void LCDPutChar(char A)
{
    int tab, i;
    
    switch( A)
    {
      case '\b':    // backstep
        if ( _cx>0)
        {
            _cx--;
            LCDPut(' ');
            _cx--;
        }    
        break;
        
      case '\t':    // move to next tab position
        tab = (_cx/8 + 1) * 8;
        // add spaces until the next tab stop
        for( i=_cx; i<tab-1; i++)
            LCDPut(' ');
        break;

      case '\n':    // New Line
#ifndef LCD_OVERLAY        // clear rest of the line
            SetColor( _back);
            Bar( FONT_W*_cx, FONT_H*_cy, GetMaxX()-1, FONT_H*(_cy+1));
            SetColor( _fore);
#endif
        LCDShiftCursorDown();
        // break;   // continue into Home
        
      case '\r':    // Home
        _cx = 0;
        break;

      default:      // print-able char
        LCDPut( A);
        break;
    } // switch
    
} // LCDPutChar


void LCDPutString( char* s)
{
    char c;
    while( (c = *s++))
        LCDPutChar( c);
} //LCDPUtString


void LCDCenterString( int p, char *s)
{  // p  integer offset (lines) above or below center
   // s  string
   // differs from MMB similar function by using Terminal mono space font
    int x, y;

    // get center position
    y = _MAX_Y/2 - 1 + p;
    x = (_MAX_X - strlen( s))/2;

    // set and print
    LCDSetXY(  x, y); 
    LCDPutString( s);
} // LCDCenterString

