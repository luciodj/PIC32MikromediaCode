/*
 * Project: 1-Solution.X
 * File:    main.c
 */

#include "xc.h"
#include <plib.h>


#define LED_BLED                _RA9
#define ConfigureBacklight()    _TRISA9 = 0

#define __RTCC_ISR    __attribute__(( vector(_RTCC_VECTOR), interrupt(ipl1), nomips16))

void __RTCC_ISR  _RTCCInterrupt( void)
{
    LED_BLED = 1 - LED_BLED;            // toggle LED_BLED output
    IFS1bits.RTCCIF = 0;                // INTClearFlag( INT_RTCC);
}


int main( void )
{
    // 1. init I/O and timer
    ConfigureBacklight();               // configure I/O as output
    RtccInit();                         // init 32KHz oscillator
    RtccWrEnable( 1);
    RtccEnable();
    RtccAlarmEnable();                  // enable alarm interrupts
    RtccSetAlarmRpt( RTCC_RPT_HALF_SEC);// set period
    RtccChimeEnable();
    INTSetVectorPriority( _RTCC_VECTOR,  INT_PRIORITY_LEVEL_1);

    // 2. enable interrupts
    INTEnableSystemMultiVectoredInt();
    INTEnableInterrupts();
    INTEnable(INT_RTCC, INT_ENABLED);

    // 2. main loop
    while( 1)
    {
       PowerSaveSleep();                // go to sleep

    } // main loop

} // main
