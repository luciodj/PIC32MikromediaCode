/* 
 * File:   adxl345.h
 */

#ifndef ADXL345_H
#define	ADXL345_H

#define USE_AND_OR

#include <i2c.h>

#define ACC_ADDRESS         0x3A // default address
#define ACC_BAUD_100kHz     157  //  Assuming 16MHz clock using Tabl1e 15-1 DS
#define ACC_DEVID           0x00 // devid register
#define ACC_X0              0x32 // X0 value

BYTE readACCRegister( BYTE reg);
void writeACCRegister( BYTE reg, BYTE b);
int ACCInit( void);
void readACCxyz( int* x, int* y, int* z);


#endif	/* ADXL345_H */

