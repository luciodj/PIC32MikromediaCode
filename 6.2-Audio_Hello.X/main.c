/*
 * Project: Audio_Hello
 * File:   main.c
 *
 */
#include "PICconfig.h"
#include "uMedia.h"
#include "vs1053.h"

#include "Hello.h"

int main( void )
{
    size_t length;
    BYTE *p;

    // initializations
    uMBInit();                      // init PPS

    // init the MP3 player
    MP3Init( 0);                    // init decoder, default

    setMP3Volume( 30, 30);          // set volume
    DelayMs( 1);
    
    // Main Loop
    while( 1 )
    {
        // 1. init pointer to flash audio resource
        p = (void*) _Hello;
        length = sizeof( _Hello);

        // 2. play back entire audio resource
        while ( length > 0 )
            feedMP3( &p, &length);

        flushMP3();                 // flush the buffer

        // 3. repeat after a brief pause
        DelayMs(200);
        
    } // main loop
}



