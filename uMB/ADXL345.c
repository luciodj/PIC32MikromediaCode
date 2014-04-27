/*
 * ADXL345.c
 *
 * Accelerometer I2C Interface
 */


#include "ADXL345.h"


void AddressACC( BYTE add)
{
    // 1. write the device addess
    while( 1)
    {
        StartI2C2();    IdleI2C2();

        // send command and address
        MasterWriteI2C2( ACC_ADDRESS);  IdleI2C2();

        // exit if received an acknowledge
        if ( I2C2STATbits.ACKSTAT == 0)
            break;

        StopI2C2();     IdleI2C2();
    } // wait until you receive an acknowledge

    // 2. send the register address
    MasterWriteI2C2( add);      IdleI2C2();

} // address Acc


BYTE readACCRegister( BYTE reg)
{
    BYTE r = 1;

    // 1. select device and register
    AddressACC( reg);

//    StopI2C2();     IdleI2C2();

    // 2. issue a read command
    RestartI2C2();    IdleI2C2();
    MasterWriteI2C2( ACC_ADDRESS + 1);  IdleI2C2();
    
    //3. get one byte of data in
    r = MasterReadI2C2();
    Nop();
    Nop();

    // 4. terminate sequence
    NotAckI2C2(); IdleI2C2();
    Nop();
    Nop();

    StopI2C2(); IdleI2C2();

    // 5. return value read
    return r;

} // read ACC Register


void writeACCRegister( BYTE reg, BYTE b)
{
    AddressACC( reg);
    MasterWriteI2C2( b); IdleI2C2();
    StopI2C2(); IdleI2C2();

} // write ACC register


/*
 * Accelerometer initialization
 */
int ACCInit( void)
{
    BYTE w;
    
    // configure I2C port for accelerometer access
	OpenI2C2( I2C_ON | I2C_7BIT_ADD | I2C_STR_EN, ACC_BAUD_100kHz);
    IdleI2C2();


    // 1. test Read DEVID register
    w = readACCRegister( ACC_DEVID);
    if ( w != 0xE5)
        return -1;                      // Failed

    // 2. enable measurement
    writeACCRegister( 0x2D, 0x08 );     // write to POWER_CTL register
    
    return 0;                           // Success
} // ACC Init


int c;


void readACCxyz( int* x, int* y, int* z)
{
    int r;
    
     // 1. select device and register
    AddressACC( ACC_X0);

    StopI2C2();     IdleI2C2();

    // 2. issue a read command
    StartI2C2();    IdleI2C2();
    MasterWriteI2C2( ACC_ADDRESS + 1);  IdleI2C2();

    //3. get X
    r = MasterReadI2C2();           // lsb
    AckI2C2(); IdleI2C2();          // ask for more
    r |= ( MasterReadI2C2() << 8);  // msb
    *x = r;

    AckI2C2(); IdleI2C2();          // ask for more

    //4. get Y
    r = MasterReadI2C2();           // lsb
    AckI2C2(); IdleI2C2();          // ask for more
    r |= ( MasterReadI2C2() << 8);  // msb
    *y = r;

    AckI2C2(); IdleI2C2();          // ask for more

    //5. get Z
    r = MasterReadI2C2();           // lsb
    AckI2C2(); IdleI2C2();          // ask for more
    r |= ( MasterReadI2C2() << 8);  // msb
    *z = r;
    
    // 6. terminate sequence
    NotAckI2C2(); IdleI2C2();
    StopI2C2(); IdleI2C2();

} // readACCxyz


