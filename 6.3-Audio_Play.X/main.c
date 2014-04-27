/*
 * Project: Audio_Play
 * File:    main.c
 *
 * Requires: MAL 1306
 */

#include "PICconfig.h"

#include "Graphics/Graphics.h"
#include "MDD File System/FSIO.h"
#include "uMedia.h"
#include "vs1053.h"

unsigned hdat0, hdat1;


int main( void )
{
    FSFILE *fp;
    BYTE data[ 512];
    size_t length;
    BYTE *p;
    
    // 1. initializations
    uMBInit();

    InitGraph();
    SetColor( WHITE);
    ClearDevice();
    DisplayBacklightOn();

    // init file system, wait for SD card to be inserted
    while  ( FSInit() != TRUE)
    {
        DelayMs(100);
    }

    // init the MP3 Decoder
    MP3Init( 0);                // init the MP3 decoder

    setMP3Volume( 30, 30);
    DelayMs(1);

    // signal card detected and mounted
    SetColor( GREEN);
    ClearDevice();              // show green screen if successful initializing

    // try to open an MP3 file
    if ( (fp = FSfopen( "TAKE5.MP3", "r")) == NULL)
    {
        SetColor( BRIGHTRED);
        ClearDevice();
        while(1);
    }

    
    // 2. Main Loop
    while( 1 )
    {
        //  play MP3 File
        while( !FSfeof( fp))
        {
            length = 0;
            while( 1)
            {
                int i;
                // 3. feed data to the MP3 player when ready
                while ( !MP3_DREQ || (length == 0))
                {
                    MP3_DCS_Disable();

                    // 4. this is a good time to fetch more data if necessary
                    if (length == 0)
                    {   // read a buffer full of data
                        length = FSfread( data, 1, sizeof(data), fp);
                        p = &data[0];
                    }
                    else {
                        // add your task here
                    }
                }

                // 5. ready to received data
                MP3_DCS_Enable();           // select the data interface
                for( i = 0; i < 32; i++ )
                {
                    if( length == 0)        // if sent all data exit
                        break;

                    writeMP3( *p);
                    p++;
                    length--;               // decrement counter
                }
            }
            MP3_DCS_Disable();
        }

        // 6. close stream
        flushMP3();         // FlushMP3 buffer
        FSrewind( fp);      // rewind file

        // repeat after a brief pause
        DelayMs(200);
    } // main loop
}


