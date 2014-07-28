/*
 * Project: 1- Hello World a.k.a. Big Blinky
 * File:    main.c
 *
 */

#include "xc.h"

#pragma config POSCMOD=XT, FNOSC=PRIPLL
#pragma config FPLLIDIV=DIV_2, FPLLMUL=MUL_20, FPLLODIV=DIV_1
#pragma config FPBDIV=DIV_2
#pragma config FWDTEN=OFF, CP=OFF, BWP=OFF


#define LED_BLED                _RA9
#define ConfigureBacklight()    _TRISA9 = 0

// define a 1/4 second delay given a 16MHz peripheral clock and 1:256 prescaler
#define DELAY                   40000000UL / 256 /4

int main( void )
{
    // 1. init I/O and timer
    ConfigureBacklight();       // configure I/O as output
    T1CON = 0x8030;             // internal clock/2 /256

    // 2. main loop
    while (1)
    {
        TMR1 = 0;               // delay
        while ( TMR1< DELAY);

        LED_BLED = 1 - LED_BLED;// toggle LED_BLED output
    } // main loop

} // main
