/*
 * Project: 4-15Tiles
 * File:    main.c
 *
 * Requires: MAL 1302
 */
#include "PICconfig.h"
#include "LCDTerminal.h"
#include "TouchScreen.h"
#include "TimeDelay.h"
#include "bitmaps.h"    // load tiles from bitmaps

unsigned m[4][4];
const void * images[] = {
    &IMG0_0, &IMG1_0, &IMG2_0, &IMG3_0,
    &IMG0_1, &IMG1_1, &IMG2_1, &IMG3_1,
    &IMG0_2, &IMG1_2, &IMG2_2, &IMG3_2,
    &IMG0_3, &IMG1_3, &IMG2_3, &IMG3_3
};


//#ifdef __XC32__
//#define _TIMER3_ISR  __attribute__(( vector(_TIMER_3_VECTOR), interrupt(ipl1), nomips16))
//#else
//#define _TIMER3_ISR  __attribute__((interrupt, shadow, auto_psv))
//#endif
//
//void _TIMER3_ISR _T3Interrupt( void)
//{
//    IFS0bits.T3IF = 0;          // Clear flag
//    TouchDetectPosition();
//}
//
//#define TICK_PERIOD( ms)  (GetPeripheralClock() * (ms)) / 8000
//
//void TickInit( unsigned period_ms)
//{
//    // Initialize Timer3
//    TMR3 = 0;
//    PR3 = TICK_PERIOD( period_ms);
//    T3CONbits.TCKPS = 1;        // Set prescale to 1:8
//    IFS0bits.T3IF = 0;          // Clear flag
//    IPC3bits.T3IP = 1;          // SetPriorityIntT3( 1);
//    IEC0bits.T3IE = 1;          // Enable interrupt
//    T3CONbits.TON = 1;          // Run timer
//}


int TouchGet( void)
{   // returns 10..1F if screen pressed, 0 = none
    int  x, y, r;

    // 1. get the latest reading
    x = TouchGetX();  y = TouchGetY();

    // 2. if one of the two is null the other is too
    if (( x < 0) || ( y < 0))
        return 0;

    // 3. identify point on grid (4x4 = 0001yyxx)
    r  = ((y / ( GetMaxY()/4)) <<2) + ( x / ( GetMaxX()/4) );
    return r + 0x10;

} // TouchGet


int TouchGrid( void)
{   // wait for a key pressed and debounce
    int released = 0;           // released counter
    int pressed = 0;            // pressed counter
    int code;                   // grid code
    int r = 0;                  // return value

    // 1. wait for a key pressed for at least 10 loops
    while ( pressed < 10)
    {
        code = TouchGet();
        if ( code > 0) pressed++;
        else  pressed = 0;

        DelayMs( 1);
    }

    // 2. wait for key released for at least 10 loops
    while ( released < 10)
        {
        code = TouchGet();
        if ( code > 0)
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
        r += 0x80;              // add a flag in bit 7 of the code

    // 4. return code
    return r;

} // TouchGrid


void paintTile( unsigned tx, unsigned ty, unsigned color)
{
    //char s[6];
    unsigned q = m[tx][ty];
    unsigned y = ty * GetMaxY()/4;
    unsigned x = tx * GetMaxX()/4;

    if ( q>0)
        PutImage( x, y, (void*)images[ q], IMAGE_NORMAL);
    else
    {
        SetColor( LCD_BACK);
        Bar( x, y, x+(GetMaxX()/4), y+ (GetMaxY()/4));
    }
 } // paintTile


void swapTiles( unsigned x, unsigned y, int dx, int dy)
{
    // move the tile in the empty space
    m[x+dx][y+dy] = m[x][y];
    paintTile( x+dx, y+dy, GREEN);

    m[x][y] = 0;
    paintTile( x, y, BRIGHTRED);
} // swapTiles


int main( void )
{
    unsigned  q, x, y;

    // init board
    uMBInit();

    // init the graphics
    LCDInit();
    DisplayBacklightOn();

    // 2. set timer 3 and enable interrupt
    TickInit( 1);
    
    // 3. init touch module (do not use NVM to store calibration data)
    TouchInit( NULL, NULL, NULL, NULL);
    //TouchHardwareInit( NULL);
    //TouchCalculateCalPoints();
    LCDClear();

    // 4. splash screen
    LCDCenterString( -1, "15 Tiles Game");
    LCDCenterString( +1, "Tap to start");
    while( TouchGetX() < 0);    // wait for tap
    while( TouchGetX() > 0);    // wait for release
    LCDClear();

    // 5. init the 4x4 matrix
    q = 0;
    for( y=0; y<4; y++)
        for( x=0; x<4; x++)
        {
            m[x][y]= q++;
            paintTile( x, y, (q==1) ? BRIGHTRED : GREEN);
        }

    // 6. main loop
    while( 1 )
    {
        q = TouchGrid();
        x = q & 3;
        q >>=2;
        y = q & 3;


        // check if near the 0 tile
        if ((x>0) && ( m[x-1][y] == 0))
            swapTiles( x, y, -1, 0);
        if ((x<3) && ( m[x+1][y] == 0))
            swapTiles( x, y, +1, 0);
        if ((y>0) && ( m[x][y-1] == 0))
            swapTiles( x, y, 0, -1);
        if ((y<3) && ( m[x][y+1] == 0))
            swapTiles( x, y, 0, +1);

    } // main loop
} // main
