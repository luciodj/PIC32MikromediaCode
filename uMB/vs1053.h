/*
 * File:   VS1053.c
 * Author: Lucio Di Jasio
 *
 * Created on January 17, 2013
 *
 * Requires: MLA 2012-10 or later
 */

#ifndef _VS1053
#define _VS1053

#define USE_AND_OR
#include <plib.h>
#include <TimeDelay.h>
#include "HardwareProfile.h"


// basic SCI commands
#define MP3_CMD_WRITE       0x02
#define MP3_CMD_READ        0x03

// basic registers list
#define MP3_REG_MODE        0x00    // mode options
#define MP3_REG_STATUS      0x01    // main status reg
#define MP3_REG_BASS        0x02    // enable bass & treble enhancements
#define MP3_REG_CLOCKF      0x03    // clock + freq. multiplier
#define MP3_REG_DECODE_TIME 0x04    // in seconds
#define MP3_REG_AUDATA      0x05    // misc. audio data
#define MP3_REG_WRAM        0x06    // RAM write/read
#define MP3_REG_WRAMADDR    0x07    // base address for RAM write/read
#define MP3_REG_HDAT0       0x08    // stream header data 0
#define MP3_REG_HDAT1       0x09    // stream header data 1
#define MP3_REG_AIADDR      0x0A    // start address of application
#define MP3_REG_VOL         0x0B    // volume control

// MODE register options
#define MP3_MODE_DIFF      0x01     // differential (left channel inverted)
#define MP3_MODE_LAYER12   0x02     // allow MPEG layers 1 & 2
#define MP3_MODE_RESET     0x04     // soft reset
#define MP3_MODE_CANCEL    0x08     // cancel decoding
#define MP3_MODE_EARLOW    0x10     //
#define MP3_MODE_TEST      0x20     // allow test sequences
#define MP3_MODE_STREAM    0x40     // stream mode
#define MP3_MODE_EARHIGH   0x80
#define MP3_MODE_DACT      0x100    // DCLK active edge (rising, default: falling)
#define MP3_MODE_SDIORD    0x200    // SDI bit order (default: MSb first)
#define MP3_MODE_SDISHARE  0x400    // share SPI chip select
#define MP3_MODE_SDINEW    0x800    // new VS1002 native mode



// prototypes
WORD writeMP3( BYTE b);
void writeMP3Register(BYTE reg, WORD w);
WORD readMP3Register( BYTE reg);

void MP3Init( WORD mode);
void setMP3Volume( WORD left, WORD right);
void testMP3Sine( BYTE n);
void feedMP3( BYTE **pdata, size_t *plength);


//
#endif
