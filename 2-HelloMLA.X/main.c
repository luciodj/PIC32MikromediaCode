/*
 * File:   main.c
 *
 * Project: 2-HelloMLA
 */
#include "xc.h"
#include "PICconfig.h"
#include "Graphics/Graphics.h"

int main( void )
{
    int i;

    // 1. Display initialization
    InitGraph();

    // 2. Application initialization
    SetColor( GREEN);
    ClearDevice();
    DisplayBacklightOn();

    // 3. testing the primitives
    SetColor( BLACK);
    for( i=0; i<100; i+=10)
    {
        MoveTo( 10, 10);
        LineTo( 100, 10+i);
        Circle( 20+i, 220-i, 10+i);
    }

    SetColor( BRIGHTRED);
    Bar(120, 10, 170, 60);
    Rectangle( 120, 10, 200, 90);

    SetColor( BLUE);
    FillBevel( 220, 20, 250, 50, 10);
    Bevel( 220, 20, 310, 110, 10);

    SetColor( ORANGE);
    FillCircle( 270, 190, 40);

    // 4. Hello World
    SetColor( WHITE);
    MoveTo( 100, 100);
    SetFont( (void*)&GOLFontDefault);
    OutText( "Hello MLA!");

    // 5. main loop
    while( 1);

} // main
