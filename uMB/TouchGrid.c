/*
 * File:   TouchGrid.c
 *
 *
 * Requires: MAL 1306, LCDTerminal.c, TouchScreen.c
 */

#include "HardwareProfile.h"
#include "uMedia.h"
#include "TouchGrid.h"
#include "M25P80.h"


static int Xside, Yside;

void TouchGridInit( int x, int y)
{
    // define the grid dimensions
    Xside = x;
    Yside = y;

    // init the touch timer 
    TickInit( 1);
    
#ifdef _SFLASH
    TouchInit( &SST25WriteWord, &SST25ReadWord, &SST25SectorErase, NULL);
#else
    TouchInit( NULL, NULL, NULL, NULL);
#endif
} // Touch Grid Init


t_code TouchGet( void)
{   // returns 10..1F if screen pressed, 0 = none
    int x, y;
    t_code r;

    r.valid = 0;

    // 1. get the latest reading
    x = TouchGetX();  y = TouchGetY();

    // 2. if one of the two is null the other is too
    if (( x < 0) || ( y < 0))
        return r;       // return if no valid code found

    // 3. identify point on grid (4x4)
    r.y  = y / ( Yside); r.x =  x / ( Xside) ;
    r.valid = 1;
    r.option = 0;

    return r;

} // TouchGet


t_code TouchGrid( void)
{   // wait for a key pressed and debounce
    int released = 0;           // released counter
    int pressed = 0;            // pressed counter
    t_code code;                // grid code
    t_code r;                   // return value

    // 1. wait for a key pressed for at least 10 loops
    while ( pressed < 10)
    {
        code = TouchGet();
        if ( code.valid > 0) pressed++;
        else  pressed = 0;

        DelayMs( 1);
    }

    // 2. wait for key released for at least 10 loops
    while ( released < 10)
        {
        code = TouchGet();
        if ( code.valid > 0)
        {
            r = code;
            released = 0;       // not released yet
            pressed++;          // still pressed, keep counting
        }
        else released++;

        DelayMs( 1);
        }

    // 3. check if a button was pushed longer than 500ms
    if ( pressed > 500)
        r.option = 1;

    // 4. return code
    return r;

} // TouchGrid


void setGrid( int x, int y)
{
    Xside = x;  Yside = y;
}
