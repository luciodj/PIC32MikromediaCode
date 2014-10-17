/*
 * Project: Storage_Menu
 * File:    main.c
 * 
 * Requires: MLA 1306
 */

#include "PICconfig.h"

// 1. include libraries
#include "TimeDelay.h"
#include "LCDTerminal.h"
#include "TouchGrid.h"
#include "MDD File System/FSIO.h"


char data[ 400];
#define N_FILES     16

// Provide a rudimental selection menu
int Menu( char list[][16], int items)
{
    int i, j, n;
    code_t c;

    // 1. init cursor position, first item selected
    n = 0;

    // 2. display item list and wait for user input
    while ( 1)
    {
        // 3. draw menu list of items
        for(i=0; i< items; i++)
        {
            // position each item on the menu centered horizontally and vertically
            LCDSetXY( (_MAX_X-14)/2, ( _MAX_Y - items)/2 + i);

            // temporary color scheme
            if (i != n)
            {   // non selected items are displayed in Yellow over Blue
                LCDSetBackground( BLUE);
                LCDSetColor( YELLOW);
            }
            else
            {   // the current selected item is displayed in blue over yellow
                LCDSetBackground( YELLOW);
                LCDSetColor( BLUE);
            }

            // each item must be padded to clear the entire line
            LCDPut(' ');
            LCDPutString( list[ i]);
            for(j=0;j<(14-strlen( list[i])); j++)
                LCDPut(' ');
        } // for

        // 4. draw touch 'hints'
        int mx = ( GetMaxX()+1)/2;
        int w = 40;
        int h = 20;
        SetColor( LIGHTGRAY);
        Line( mx-w, h, mx, 2); LineTo( mx+w, h);    // up arrow
        Line( mx-w, GetMaxY()-h, mx, GetMaxY()-2); LineTo( mx+w, GetMaxY()-h);    // down arrow
        int my = ( GetMaxY()+1)/2;
        w = 20; h = 40;
        Line( GetMaxX()-w, my-h, GetMaxX()-2, my); LineTo( GetMaxX()-w, my+h);   // right arrow
        
        // 5. restore default colors
        LCDSetBackground( LCD_BACK);
        LCDSetColor( LCD_FORE);

        // 6. wait for a touch input event
        c = TouchGrid();

        if ( c.x == 2)          // right side of the screen -> select
        {
            return n+1;
        }

        else if ( c.y == 0)     // top of the screen -> move cursor up
        {
            if (n > 0)  n--;
        }

        else if ( c.y == 2)     // bottom of the screen -> move cursor down
        {
            if ( n < items-1) n++;
        }

// screen capture
//        else if (c.x == 0)      // left side of the screen
//        {
//        } // screen capture

    } // while

} // Menu


// Let the user choose a file from a list selected by extension
void SelectFile( char *fn, char *ext)
{ // fn    pointer to selected filename
  // ext   "*.TXT" selection criteria

    char list[ N_FILES][16];
    int n = 0;
    SearchRec sr;

    while( 1)
    {
        // 1. ensure the file system is initialized, card inserted
        while( !FSInit())
        {
            LCDCenterString( 0, "Insert Card");
            DelayMs( 100);
        }
        LCDClear();

        // 2. search for ".ext" files and put them in list
        if ( !FindFirst( ext, ATTR_READ_ONLY | ATTR_ARCHIVE, &sr))
        {
            do{
                // while there are files matching
                // copy the file name
                strncpy( list[ n++], sr.filename, 16);

                // check if list full
                if ( n==N_FILES)
                    break;
            } while ( !FindNext( &sr));
        }

        // 3. n = listTYPE( list, N_FILES, ext);
        if ( n > 0)
        {
            // found at least one file
            n = Menu( list, n);
        }

        // 4. if no file found or none selected
        if ( n == 0)
        {
            //report error and allow to swap card
            LCDCenterString( 0, "File Not Found");
            TouchGrid();
            LCDClear();
        }

        else // 5. valid file selected
        {
             //form the chosen filename
             strncpy( fn, list[(n-1)], 16);
             return;
        }
    }// while

} // select file



int main( void )
{
    FSFILE *fp;
    unsigned length;
    char *p, filename[32];


    // 1. initializations
    uMBInit();                  // init pins and ports
    LCDInit();                  // inits terminal emulation
    DisplayBacklightOn();
    TouchGridInit( 3, 3);       // defines a 3x3 grid

    // 2. splash screen
    LCDClear();
    LCDCenterString( -1, "Menu demo");
    LCDCenterString( +1,  "tap to start");
    while (TouchGetX() < 0);
    while (TouchGetX() > 0);
    LCDClear();


    // 3. Main Loop
    while( 1 )
    {
        LCDClear();

        // 6.1 let the user choose a suitanle text file
        SelectFile( filename, "*.TXT");
        
        // 6.2 try to open a file
        if ( (fp = FSfopen( filename, "r")) == NULL)
        {
            LCDPutString( "\n File Not Found");
        }

        else  // 6.3 file found, print the first buffer full
        {
            LCDClear();

            // grab a first batch of data
            length = FSfread( data, 1, sizeof(data), fp);

            // output to the terminal
            p = &data[0];
            while( length-- > 0 )
            {
                LCDPutChar( *p++);
            }

            // print "..." if the file continues and close it
            if ( !FSfeof( fp))
                LCDPutString( "...");
            FSfclose( fp);

        }   // else

        // 4. prompt to continue
        LCDPutString( "\n Tap to continue");
        TouchGrid();

    }   // main loop
}   // main


