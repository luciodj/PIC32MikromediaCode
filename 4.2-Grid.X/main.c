/*
 * Project: 4.2-Grid
 * File:    main.c
 *
 * Requires: MLA 1306
 */

#include "PICconfig.h"
#include "LCDTerminal.h"
#include "TouchScreen.h"
#include "TouchGrid.h"

#include "uMedia.h"

int main( void )
{
    code_t q;
    SHORT sx = (GetMaxX()+1)/4;
    SHORT sy = (GetMaxY()+1)/4;

    // 1. init the MCU
    uMBInit();

    // 2. init the graphics
    LCDInit();
    DisplayBacklightOn();

    // 3. init grid
    TouchGridInit( 4, 4);
    LCDClear();

    // 4. splash screen
    LCDCenterString( -1, "Grid Demo");
    LCDCenterString( +1, "Tap to start");
    while( TouchGetX() < 0);    // wait for tap
    while( TouchGetX() > 0);    // wait for release
    LCDClear();

    // 5. main loop
    while( 1 )
    {
        int x, y;

        // 5. draw a grid
        SetColor( LIGHTGRAY);
        SetLineType( DASHED_LINE);
        for( x=1; x<4; x++)
            Line( x*sx, 0, x*sx, GetMaxY());
        for( y=1; y<4; y++)
            Line( 0, y*sy, GetMaxX(), y*sy);


        // 6. wait for touch on the grid
        q = TouchGrid();

        // 7. remove previous images
        SetColor( LCD_BACK);
        ClearDevice();

        // 8. choose color based on how long the pressure has been applied
        SetColor( ( q.option) ? BRIGHTRED : LCD_FORE );

        // 9. position a filled tile on the grid
        y = sy * q.y;
        x = sx * q.x;
        FillBevel( x+5, y+5, x + sx-5, y + sy-5, 5);

// // screen capture
//        if ( x >160)
//        {
//            uMBInit(); FSInit();
//            ScreenCapture( "4-2-GRID.SCR");
//        }

    } // main loop
} // main



