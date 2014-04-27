/*
 * Project Storage_flash
 *
 * File:  main.c
 *
 * Requires: MAL 1306
 */

#include "PICconfig.h"

#include "TimeDelay.h"
#include "LCDTerminal.h"
#include "TouchGrid.h"
#include "MDD File System/FSIO.h"
#include "LCDmenu.h"
#include "M25P80.h"


char data[ 4096];           // ensure that ERASE_SECTOR_SIZE is divisible by sizeof(data)!

int main( void )
{
    FSFILE *fp;
    unsigned length;
    char *p, filename[32];
    DWORD address, i, scount;


    // 1. initializations
    uMBInit();                                // init pins and ports
    LCDInit();                                // inits terminal emulation
    DisplayBacklightOn();
    TouchGridInit( GetMaxX()/3, GetMaxY()/3); // defines a 3x3 grid

    // 2. splash screen
    LCDClear();
    LCDCenterString( -1, "SFlash demo");
    LCDCenterString( +1, "tap to start");
    TouchGrid();


    // 3. Main Loop
    while( 1 )
    {
        LCDClear();

        // 4. try to open a file
        SelectFile( filename, "*.txt");
        LCDClear();

        // 5. open file
        fp = FSfopen( filename, "r");
        if ( fp == NULL)
        {
            LCDCenterString( 0, "Cannot open file");
        }

        else // copy
        {
            address = 0;        // absolute address
            scount = 0;         // sector relative count
            LCDClear();

            // 6. copy file in flash
            while ( !FSfeof( fp))
            {
                // 7. erase sector at the beginning
                if ( scount == 0)
                    SST25SectorErase( address);
                LCDPutString( "\n***Erasing Sector***");

                // 8. copy (up to) one sector of data at a time
                length = FSfread( &data, 1, sizeof( data), fp);
                LCDPutString( "\n***Writing Data***");

                // 9. write to device
                SST25WriteArray( address, data, length);
                address += length;
                
                // 10. roll over the counter within a sector
                scount  += length;
                if ( scount > ERASE_SECTOR_SIZE)
                    scount = 0;
            }

            FSfclose( fp);

            // 11. read back and display on terminal
            LCDPutString( "\n ***Enf of File***");
            LCDPutString( "\n Tap to read back");
            TouchGrid();

            for ( i=0; i<address; i++)
                LCDPutChar( SST25ReadByte( i));

            LCDPutString( "\n Enf of File");
        } // copy

        // 12. prompt to continue
        TouchGrid();

    }   // main loop
}   // main


