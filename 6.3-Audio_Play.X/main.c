/*
 * Project: Audio_Play
 * File:    main.c
 *
 * Requires: MLA 1306
 */
#include "PICconfig.h"
#include "Graphics/Graphics.h"
#include "MDD File System/FSIO.h"
#include "uMedia.h"
#include "vs1053.h"

int main( void )
{
    FSFILE *fp;
    BYTE data[ 512];
    size_t length = 0;
    BYTE *p;
    
    // 1. initializations
    uMBInit();
    InitGraph();
    SetColor( WHITE);
    ClearDevice();
    DisplayBacklightOn();

    // init the MP3 Decoder
    MP3Init( 0);               
    setMP3Volume( 30, 30);
    DelayMs(1);

    // init file system, wait for SD card to be inserted
    while  ( FSInit() != TRUE)
    {
        DelayMs(100);
    }

    // signal card detected and mounted
    SetColor( GREEN);
    ClearDevice();              // show green screen if successful initializing

    // try to open an MP3 file
    if ( (fp = FSfopen( "SONG.MP3", "r")) == NULL)
    {
        SetColor( BRIGHTRED);
        ClearDevice();          // show red screen if could not find the file
        while(1);
    }

    // 2. Main Loop
    while( 1 )
    {
        int i;
        // 3. check if buffer ready
        if (length == 0)
        {
            MP3_DCS_Disable();

            // 4. fetch more data
            length = FSfread( data, 1, sizeof(data), fp);
            p = &data[0];

            if (length==0)          // 6. eof
            {
                flushMP3();         // flush buffer
                FSrewind( fp);      // rewind file
                DelayMs(200);       // repeat after a brief pause
                continue;
            }
        }

        // wait if codec not ready to get more data
        while ( !MP3_DREQ)
        {
             // add your task here
        }

        // 5. feed the codec
        MP3_DCS_Enable();           // select the data interface
        for( i = 0; i < 32; i++ )
        {
            if( length == 0)        // if sent all data exit
                break;

            writeMP3( *p);
            p++;
            length--;               // decrement counter
        }

        // 6. close stream
        flushMP3();         // FlushMP3 buffer
        FSrewind( fp);      // rewind file

        // repeat after a brief pause
        DelayMs(200);
    } // main loop
}


