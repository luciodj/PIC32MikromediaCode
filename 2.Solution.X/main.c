/*
 * Project: 2.Solution
 * File:    main.c
 *
 */

#include "xc.h"
#include "PICconfig.h"
#include "Graphics/Graphics.h"



/**
 * @func  CenteredText
 *
 * @param y             vertical coordinate
 * @param color         color used for text
 * @param s             string to be centered
 */
void CenteredText( unsigned y, unsigned color, char* s)
{
    unsigned margin;
    unsigned width = GetTextWidth( s, (void*) &GOLFontDefault);

    // check if too large to fit
    if ( width > GetMaxX())
        margin = 0;                         // use no margin, clip the right side
    else
    // compute margin to center
        margin = (GetMaxX() - width) / 2;   // split margin equally on both sides

    // set the color
    SetColor( color);

    // print string on screen
    OutTextXY( margin, y, s);

} // Centered Text


int main( void )
{
    unsigned height;

    // 1. init
    InitGraph();
    DisplayBacklightOn();
    SetFont( (void*) &GOLFontDefault);

    // 2. Centered Title
    height = GetTextHeight( (void*) &GOLFontDefault);
    CenteredText( GetMaxY()/2-height, BRIGHTRED, "Chapter 2: Solution");

    // main loop
    while( 1)
    {

    } // main loop
}