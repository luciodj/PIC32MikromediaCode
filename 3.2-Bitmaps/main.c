/*
 * File:   main.c
 * 
 * Chapter 3: Graphic Resources - Color Splashscreen
 * 
 */

#include "PICconfig.h"
#include "Graphics/Graphics.h"
#include "Graphics/GOL.h"

#include "resources.h"
#include "uMedia.h"

int main( void )
{
    int width;
    char s[] = "Fonts and Bitmaps";

    // 1. init
    InitGraph();                    // init graphics library
    SetColor( WHITE);               // set background color
    ClearDevice();                  // clear display contents
    DisplayBacklightOn();           // turn on the backlight

    // 2. display centered banner
    SetColor( BRIGHTRED);           // set color
    SetFont( (void*) &GOLFontDefault);
    width = GetTextWidth( s, (void*) &GOLFontDefault);
    OutTextXY( (GetMaxX()-width)/2 , 0, s);

    // 3. display  fingerprint bitmap
    PutImage( 10, 60, (void*) &fingerprint, IMAGE_NORMAL);

    // 4. display  fingerprint bitmap
    PutImage( 130, 60, (void*) &flower, IMAGE_NORMAL);

//    // capture screen
//    uMBInit();
//    FSInit();
//    ScreenCapture( "3-COLOR.SCR");


    // main loop
    while( 1)
    {

    } // main loop
}
