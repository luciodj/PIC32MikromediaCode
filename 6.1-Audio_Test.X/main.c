/*
 * Project: Audio_test
 *
 * File:    main.c
 */

#include "PICconfig.h"

#include "uMedia.h"
#include "VS1053.h"


void MP3Init( WORD mode)
{
    volatile int temp;

    /// PPS must be initialized
    MP3_RST_Enable();       // force reset
    MP3_CS_Disable();
    MP3_DCS_Disable();

    MP3_RST_Config();       // make Reset output
    DelayMs( 1);
    MP3_CS_Config();        // make xCs output
    MP3_DCS_Config();       // make xDCs output

    OpenSPI( MP3_START_CFG_1, MP3_START_CFG_2);
    SPIBRG = GetPeripheralClock()/200000;

    DelayMs( 10);           // give time to reset
    MP3_RST_Disable();      // release reset

    // verify that codec is busy resetting
    while ( MP3_DREQ);

    //verify that codec is ready to receive first command
    while( !MP3_DREQ);

    // set native + mode
    writeMP3Register( MP3_REG_MODE, MP3_MODE_SDINEW | mode); 
    // double the codec clock frequency
    writeMP3Register( MP3_REG_CLOCKF, 0x2000);

    // can change to full speed now (<12MHz)
    OpenSPI( MP3_FAST_CFG_1, MP3_START_CFG_2);
    SPIBRG = GetPeripheralClock()/SPI_FREQUENCY;

} // MP3Init


WORD  writeMP3( BYTE b)
{
    putcSPI( b);
    return getcSPI();
}


void writeMP3Register( BYTE reg, WORD w)
{
    MP3_DCS_Disable();      // disable data bus
    MP3_CS_Enable();        // enable command bus
    writeMP3( MP3_CMD_WRITE);
    writeMP3( reg);
    writeMP3( w>>8);        //  MSB first
    writeMP3( w & 0xff);
    MP3_CS_Disable();
    while( !MP3_DREQ);
}


WORD readMP3Register( BYTE reg)
{  
    WORD w;
    
    MP3_DCS_Disable();
    MP3_CS_Enable();
    writeMP3( MP3_CMD_READ);
    writeMP3( reg);
    w = writeMP3( 0xff) ;               //  write dummy, get MSB first
    w = (w<<8) | writeMP3( 0xff);       //  write dummy, get LSB
    MP3_CS_Disable();
    while( !MP3_DREQ);
    return w;
}


void testMP3Sine( BYTE n)
{
    // Send a Sine Test Header to Data port
    MP3_DCS_Enable();       // enable data interface
    writeMP3( 0x53);        // special Sine Test Sequence
    writeMP3( 0xef);
    writeMP3( 0x6e);
    writeMP3( n);           // n, Fsin = Fsamp[n>>5] * (n & 0x1f) / 128
    writeMP3( 0x00);        // where Fsamp[x] = {44100,48000,32000,22050,
    writeMP3( 0x00);        //                   24000,16000,11025,12000}
    writeMP3( 0x00);        // for example n = 0x44 -> 1KHz
    writeMP3( 0x00);
    MP3_DCS_Disable();

    DelayMs( 500);          // continue sinusoid for 500ms

    // Stop the sine test
    MP3_DCS_Enable();       // enable data bus
    writeMP3( 0x45);        // special Sine Test termination sequence
    writeMP3( 0x78);
    writeMP3( 0x69);
    writeMP3( 0x74);
    writeMP3( 0x00);
    writeMP3( 0x00);
    writeMP3( 0x00);
    writeMP3( 0x00);
    MP3_DCS_Disable();

    DelayMs( 500);
} // SineTest



unsigned v;

void main( void )
{

    // initializations
    uMBInit();
    
    while( 1 )
    {
        MP3Init( MP3_MODE_TEST);    // TEST MODES enabled

        testMP3Sine( 0x44);         // 32ksmps, 1KHz out, 500ms pulse

    } // main loop
}


