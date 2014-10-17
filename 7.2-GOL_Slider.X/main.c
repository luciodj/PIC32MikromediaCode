/*
 * Project: 7-GOL_Slider
 *
 * File:    main.c
 *
 */
#include "PICconfig.h"
#include "HardwareProfile.h"
#include "uMedia.h"

#include <Graphics/GOL.h>
#include <TouchScreen.h>
#include <M25P80.h>

int main( void)
{
    GOL_MSG msg;
    GOL_SCHEME *myStyle;

    // 1. initializations
    uMBInit();

    TouchInit( NVMWrite, NVMRead, NVMSectorErase, NULL);
    GOLInit();
    SetBacklight( 255);                 // init to full brightness

    // 2. create a slider object
    SldCreate(  1,                      // unique ID
                20, 100, 300, 140,      // position and size
                SLD_DRAW,               // state
                95,                     // 0..range
                10,                     // resolution step
                230,                    // initial position (100%)
                NULL                    // default style scheme
            );

    // 3. create a new color scheme
    myStyle = GOLCreateScheme();
    myStyle->CommonBkColor = BLACK;
    myStyle->Color0 = YELLOW;
    myStyle->EmbossDkColor = BLACK;
    myStyle->EmbossLtColor = BLACK;

    // 4. create the window object (banner)
    WndCreate(  2,                      // unique ID
                0, 0, GetMaxX(), GetMaxY(),
                WND_DRAW_TITLE | WND_TITLECENTER,
                NULL,                   // icon
                "Slider Demo",          // window title
                myStyle                 // default style scheme
            );
    
    // 5. GOL main loop
    while( 1)
    {
        if ( GOLDraw())                 // if done drawing the objects
        {
            TouchGetMsg( &msg);         // generate a messsage if touched
            GOLMsg( &msg);              // process the message
        }

    } // main interface loop
    
} // main


WORD GOLMsgCallback( WORD objMsg, OBJ_HEADER* pObj, GOL_MSG* pMsg)
{
    if( pObj->ID == 1)                  // intercept messages from the slider
    {
        // update the screen backlight
        SetBacklight( 5 + SldGetPos( pObj));  
    }
    
    return 1;
} // GOL Msg Callback


WORD GOLDrawCallback()
{
    return 1;
} // GOL Draw Callback
