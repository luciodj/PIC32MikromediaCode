/*
 * Project: 3.Solution
 * 
 * File:   main.c
 *
 * Requires: MLA 1306
 */

#include "PICconfig.h"
#include "LCDTerminal.h"

#include <stdio.h>          // sprintf
#include <stdarg.h>         // var args

void Log( const char *fmt, ...)
{
    char s[128];
    va_list argp;

    va_start( argp, fmt);
    vsprintf( s, fmt, argp);
    LCDPutString( s);
    LCDPutChar( '\n');
    va_end( argp);
}


int write( int handle, char *p, unsigned len )
{
    unsigned i = len;
    
    while ( i-- > 0)
        LCDPutChar( *p++);

    return len;
}


int main( void )
{
    int i;

    // init the graphics
    LCDInit();
    DisplayBacklightOn();


    // main loop
    while( 1 )
    {
        //Log( "Hello World #%04x", i++);
        printf( "Hello World #%04x", i++);
        //DelayMs(20);

    } // main loop
} // main



