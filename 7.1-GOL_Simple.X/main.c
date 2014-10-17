/*
 * Project: 7-GOL_Simple
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

    uMBInit();
    TickInit( 1);
    TouchInit( NVMWrite, NVMRead, NVMSectorErase, NULL);

    GOLInit(); DisplayBacklightOn();

    BtnCreate(  1,                      // unique ID
                100, 80, 220, 160,      // position and size
                0,                      // radius
                BTN_DRAW,               // state
                NULL,                   // no bitmap
                "Done",                 // text
                NULL                    // default style scheme
            );

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
//    FSInit();
//    ScreenCapture( "7-Simple.scr");
    return 1;
} // GOL Msg Callback


WORD GOLDrawCallback()
{
    return 1;
} // GOL Draw Callback
