/*
 * Project: 5.1-Storage_Text
 * File:    main.c
 *
 * Desc:    Basic example of use of the MDD File System library
 *
 * Requires: MLA 1306
 */

#include "PICconfig.h"

// 1. include libraries
#include "TimeDelay.h"
#include "LCDTerminal.h"
#include "TouchGrid.h"

#include "MDD File System/FSIO.h"

char data[ 400];                // a buffer of arbitrary length

int main( void )
{
    FSFILE *fp;
    unsigned length;
    char *p;

    // 2. initializations
    uMBInit();                  // init pins and ports
    LCDInit();                  // inits terminal emulation
    DisplayBacklightOn();
    TouchGridInit( 3, 3);       // defines a 3x3 grid

    // 3. splash screen
    LCDClear();
    LCDCenterString( -1, "TEXT demo");
    LCDCenterString( +1,  "tap to start");
    TouchGrid();
    LCDClear();

    // Main Loop
    while( 1 )
    {
        LCDClear();

        // 4. init file system, wait for SD card to be inserted
        while  ( FSInit() != TRUE)
        {
            LCDCenterString( 0, "Insert SD Card");
            DelayMs( 100);
        }

        // 5. try to open a file
        if ( (fp = FSfopen( "README.TXT", "r")) == NULL)
        {
            LCDPutString( "\n File Not Found");
        }

        else    // file found
        {
            // 6. output the content of the first buffer read
            length = FSfread( data, 1, sizeof(data), fp);
            p = &data[0];
            while( length-- > 0 )
            {
                LCDPutChar( *p++);
            }

            // 7. print "..." if the file continues
            if ( !FSfeof( fp))
                LCDPutString( "...");

            FSfclose( fp);
        }   // else

        // 8. prompt to continue
        LCDPutString( "\n Tap to continue");
        TouchGrid();

    }   // main loop
}   // main


