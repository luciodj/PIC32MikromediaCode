/*
 * Project: Audio_Interrupt
 * File:    main.c
 *
 * Requires: MLA 1306
 */

#include "PICconfig.h"

#include "Graphics/Graphics.h"
#include "MDD File System/FSIO.h"
#include "uMedia.h"
#include "vs1053.h"


int fPLAY = FALSE;
FSFILE  *fp;

void BackgroundPlay( void)
{
    static size_t length = 0;
    static BYTE buffer[512], *p;
    int i;

    while( 1)
    {
        // ensure buffer is loaded
        if ( length == 0)            // if buffer empty
        {
            MP3_DCS_Disable();
            length = FSfread( buffer, 1, sizeof( buffer), fp);
            p = buffer;

            if ( length == 0)       // nothing else to read (EOF)
            { // rewind for next use
                flushMP3();
                FSrewind( fp);
                return;
            }
        }

        // check if MP3 needs feeding
        if ( MP3_DREQ)
        {
            // feed the hungry codec
            MP3_DCS_Enable();
            for( i=0; i<32; i++)
            {
                if (length==0)
                    break;
                writeMP3( *p++);
                length--;
            }
            MP3_DCS_Disable();
        }
        else return;
    }
} // background playback of MP3 files


void SoundCallback( void)
{
   if ( fPLAY == TRUE)          // check for the PLAY flag
   {
       if ( fp != NULL)         // if an mp3 file is available
           BackgroundPlay();
   }
}


int main( void )
{    
    // 1. initializations
    uMBInit();
    InitGraph();
    SetColor( WHITE);
    ClearDevice();
    DisplayBacklightOn();

    // init the MP3 Decoder
    MP3Init( 0);                // init the MP3 decoder
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
    if ( (fp = FSfopen( "song.mp3", "r")) == NULL)
    {
        SetColor( BRIGHTRED);
        ClearDevice();
        while(1);
    }

    
    // 2. Main Loop
    while( 1 )
    {
        fPLAY = TRUE;       // have the playback start

    } // main loop
}


