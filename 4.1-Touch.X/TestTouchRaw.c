/*
 * File:   TestTouchRaw.c
 *
 * Requires: MAL 1210
 */

#include <PICconfig.h>
#include "LCDTerminal.h"
#include "TouchScreen.h"


#include <stdio.h>          // sprintf

#define PERIOD_MS   1           // 1ms
#define __ISR  __attribute__((interrupt, shadow, auto_psv))

void __ISR _T3Interrupt( void)
{
    _T3IF = 0;
    TouchDetectPosition();
}



#define TICK_PERIOD( ms)  (GetPeripheralClock() * (ms)) / 8000

void TickInit( unsigned period_ms)
{
    // Initialize Timer3
    TMR3 = 0;
    PR3 = TICK_PERIOD( period_ms);
    T3CONbits.TCKPS = 1;        // Set prescale to 1:8
    IFS0bits.T3IF = 0;          //Clear flag
    IEC0bits.T3IE = 1;          //Enable interrupt
    T3CONbits.TON = 1;          //Run timer
}


int main( void )
{
    char s[64];

    // 1. init the graphics
    LCDInit();
    DisplayBacklightOn();

    // 2. set timer 3 and enable interrupt
    TickInit( 1);

    // 3. init touch module
    TouchHardwareInit( NULL);

    // 4. main loop
    while( 1 )
    {
        if (( TouchGetRawX() != -1) && ( TouchGetRawY() != -1))
        {
                sprintf( s, "%d, %d\n", TouchGetRawX(), TouchGetRawY());
                LCDPutString( s);
        }
    } // main loop
} // main
