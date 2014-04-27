/*
 * File:   VS1053.c
 * 
 */

#include "vs1053.h"


WORD  writeMP3( BYTE b)
{
    putcSPI( b);
    return getcSPI();
}


void writeMP3Register( BYTE reg, unsigned w)
{
    MP3_DCS_Disable();              // disable data bus
    MP3_CS_Enable();                // enable command bus
    writeMP3( MP3_CMD_WRITE);
    writeMP3( reg);
    writeMP3( w>>8);                //  MSB first
    writeMP3( w & 0xff);
    MP3_CS_Disable();
    while( !MP3_DREQ);
}


WORD readMP3Register( BYTE reg)
{  
    WORD w;
    
    MP3_DCS_Disable();              // disable data bus
    MP3_CS_Enable();                // enable command bus
    writeMP3( MP3_CMD_READ);
    writeMP3( reg);
    w = writeMP3( 0xff) ;           //  write dummy, get MSB first
    w = (w<<8) | writeMP3( 0xff);   //  write dummy, get LSB
    MP3_CS_Disable();
    while( !MP3_DREQ);
    return w;
}


void MP3Init( WORD mode)
{
    int i;

    // Note: PPS must be already initialized to connect the SPI port to pins
    MP3_RST_Enable();               // force reset
    MP3_CS_Disable();
    MP3_DCS_Disable();

    MP3_RST_Config();               // make Reset output
    DelayMs( 1);
    MP3_CS_Config();                // make xCs output
    MP3_DCS_Config();               // make xDCs output

    //MP3_SPICON1 = 0x007C;           // cke=0 and ckp=1, master 8-bit, pre 1:64
    //MP3_SPIENABLE = 1;              // on
    OpenSPI( MP3_START_CFG_1, MP3_START_CFG_2);

    DelayMs(  10);                   // give time to reset
    MP3_RST_Disable();              // release reset

    // verify that codec is busy resetting
    while ( MP3_DREQ);

    //verify that codec is ready to receive first command
    while( !MP3_DREQ);

    // set native + mode
    writeMP3Register( MP3_REG_MODE, MP3_MODE_SDINEW | mode); 
    // double the codec clock frequency
    writeMP3Register( MP3_REG_CLOCKF, 0x2000);

    // can change to full speed now
    //MP3_SPICON1 = 0x007E;
    OpenSPI( MP3_FAST_CFG_1, MP3_START_CFG_2);

} // MP3Init


void TestMP3Sine( BYTE n)
{
    // Send a Sine Test Header to Data port
    MP3_DCS_Enable();               // enable data interface
    writeMP3( 0x53);                // special Sine Test Sequence
    writeMP3( 0xef);		
    writeMP3( 0x6e);
    writeMP3( n);                   // n, Fsin = Fsamp[n>>5] * (n & 0x1f) / 128
    writeMP3( 0x00);                // where Fsamp[x] = {44100,48000,32000,22050,
    writeMP3( 0x00);                //                   24000,16000,11025,12000}
    writeMP3( 0x00);                // for example n = 0x44 -> 1KHz
    writeMP3( 0x00);		
    MP3_DCS_Disable();		

    DelayMs( 500);

    // Stop the sine test
    MP3_DCS_Enable();               // enable data interface
    writeMP3( 0x45);                // special Sine Test termination sequence
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


void setMP3Volume( WORD left, WORD right)
{
    writeMP3Register( MP3_REG_VOL, (left<<8) + right);

} // SetMP3Volume


void flushMP3( void)
{
    int i;

    MP3_DCS_Enable();               // select the data interface
    for( i = 0; i < 2048; i++ )     // send 2048 dummy bytes to flush the FIFO
    {
        while( !MP3_DREQ );
        writeMP3( 0x00 );
    }
    MP3_DCS_Disable();
} // flush MP3


void feedMP3( BYTE **pdata, size_t *plength)
{
    int i;

    while( *plength > 0)            // while data available and buffer not full
    {
        while ( !MP3_DREQ);

        MP3_DCS_Enable();           // select the data interface
        for( i = 0; i < 32; i++ )
        {
            writeMP3( *(*pdata)++);
            (*plength)--;           // decrement counter
            if( *plength == 0)      // if sent all data exit
                break;
        }
        MP3_DCS_Disable();
    }
} // feed MP3



