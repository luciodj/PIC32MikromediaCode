/*
 * File:   main.c
 * 
 * Chapter 3: Graphics & Touch
 * 
 */

#include "xc.h"
#include "p24config.h"
#include "Graphics/Graphics.h"

#include "resources.h"


int main( void )
{
    char s[64];

    // 1. init
    InitGraph();
    SetColor( WHITE);
    ClearDevice();
    DisplayBacklightOn();

    SetColor( BLACK);
//    SetFont( (void*) &GOLFontDefault);
//    sprintf( s, "%d GOL", GetTextHeight( (void*) &GOLFontDefault));
//    OutTextXY( 0, 0, s );
//    OutTextXY( 0, 30, "0123456789");

//    SetFont( (void*) &Lucida_Sans_Typewriter_Regular_12);
//    sprintf( s, "%d GOL", GetTextHeight( (void*) &Lucida_Sans_Typewriter_Regular_12));
//    OutTextXY( 0, 0, s );
//    OutTextXY( 0, 12, "0123456789");
//
//
//    SetColor( BRIGHTRED);
//    SetFont( (void*) &Monospaced_12);
//    sprintf( s, "%d Mono", GetTextHeight( (void*) &Monospaced_12));
//    OutTextXY( 120, 0, s );
//    OutTextXY( 120, 12, "0123456789");

    SetColor( WHITE);
    // 2. 1-bit bitmap
    PutImage( 0, 60, (void*) &fingerprint, IMAGE_NORMAL);

//    // 8-bit bitmap
//    PutImage( 120, 60, (void*) &folder, IMAGE_NORMAL);
    
    // 16-bit bitmap
//    PutImage( 120, 60, (void*) &flower, IMAGE_NORMAL);

    // main loop
    while( 1)
    {

    } // main loop
}
