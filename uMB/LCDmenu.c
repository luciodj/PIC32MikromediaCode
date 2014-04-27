/*
 * File:   LCDmenu.c
 *
 * Requires: MAL 1306, LCDTerminal.c, TouchGrid.c
 */

#include "LCDmenu.h"


int Menu( char list[][16], int items)
{
    int i, j, n;
    t_code c;

    // init cursor position, first item selected
    n = 0;

    // display item list and wait for user input
    while ( 1)
    {
        // draw menu list of items
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

        // restore default colors
        LCDSetBackground( LCD_BACK);
        LCDSetColor( LCD_FORE);

        // wait for a touch input event
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

#ifdef _SCREENCAPTURE
        else if ( c.x == 0)     // left of screen capture
        {
            ScreenCapture( "screen.scr");
        }
#endif
    } // while

} // Menu



void SelectFile( char *fn, char *ext)
{ // fn    pointer to selected filename
  // ext   "*.AVI" selection criteria

    char list[ N_ITEMS][16];
    int n = 0;
    SearchRec sr;

    while( 1)
    {
        while( !FSInit())
        {
            LCDCenterString( 0, "Insert Card");
            DelayMs( 100);
        }
        LCDClear();

        // search for ".ext" files and put them in list
        if ( !FindFirst( ext, ATTR_READ_ONLY | ATTR_ARCHIVE, &sr))
        {
            do{ // while there are files matching
                // copy the file name
                strncpy( list[ n++], sr.filename, 16);
                // check if list full
                if ( n == N_ITEMS)
                    break;
            } while ( !FindNext( &sr));
        }

        //n = listTYPE( list, N_FILES, ext);
        if ( n > 0)
        {
            // found at least one file
            n = Menu( list, n);
        }

        // if no file found or none selected
        if ( n == 0)
        {
            //report error and allow to swap card
            LCDCenterString( 0, "File Not Found");
            TouchGrid();
            LCDClear();
        }

        else
        {
             //form the chosen filename
             strncpy( fn, list[(n-1)], 16);
             return;
        }
    }// while

} // select file
