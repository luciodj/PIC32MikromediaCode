/*
 * Project: 5.3-Storage_Slides
 *
 *  File:    main.c
 *
 * Requires: MAL 1306
 */

#include "PICconfig.h"

// 1. included modules
#include "TimeDelay.h"
#include "LCDTerminal.h"
#include "TouchGrid.h"
#include "MDD File System/FSIO.h"
#include "LCDmenu.h"
#include "Image Decoders/ImageDecoder.h"

// 2. Image Decoding, full screen of a given image file, format deduced by extension
int PutSlide( char *filename)
{
    char *ext;
    IMG_FILE *pImageFile;
    IMG_FILE_FORMAT fmt;


    // 3. find the file extension
    ext = filename;
    while( *ext)
    {
        if ( *ext++ == '.')
            break;
    }

    // 4. depending on file extension deduce image format
    if (( strcmp( ext, "JPG") == 0) || ( strcmp( ext, "jpg") == 0))
        fmt = IMG_JPEG;
    else if (( strcmp( ext, "GIF") == 0) || ( strcmp( ext, "gif") == 0))
        fmt = IMG_GIF;
    else if (( strcmp( ext, "BMP") == 0) || ( strcmp( ext, "bmp") == 0))
        fmt = IMG_BMP;
    else return -2;     // slide format unknown

    // 5. decode selected image
    pImageFile = IMG_FOPEN( filename, "r");
    if(pImageFile == NULL)
    {
        return -1;  // error: file not found
    }

    else // full screen decoding and centering of image, default output
    {
        ImageFullScreenDecode( pImageFile, fmt, NULL, NULL);
        IMG_FCLOSE(pImageFile);
    }

    // return success
    return( 0);
} // PutSlide


int main( void )
{
    FSFILE *fp;
    unsigned length;
    char *p, filename[32];


    // 1. initializations
    uMBInit();                                // init pins and ports
    LCDInit();                                // inits terminal emulation
    DisplayBacklightOn();
    TouchGridInit( GetMaxX()/3, GetMaxY()/3); // defines a 3x3 grid
    ImageDecoderInit();                       // init the image decoding lib

    // 2. splash screen
    LCDClear();
    LCDCenterString( -1, "Slides demo");
    LCDCenterString( +1, "tap to start");
    TouchGrid();


    // 3. Main Loop
    while( 1 )
    {
        LCDClear();

        // 4. try to open a file
        SelectFile( filename, "*.*");
        LCDClear();

        // 5. decode and place image centered full screen
        if ( PutSlide( filename))
        {
            LCDCenterString( 0, "Unable to Display");
        }

//        ScreenCapture( "screen2.scr");

        
        // 6. prompt to continue
        TouchGrid();

    }   // main loop
}   // main


