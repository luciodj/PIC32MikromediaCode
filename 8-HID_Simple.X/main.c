/********************************************************************
 Project:       8-HID_Simple
 FileName:      main.c
 Hardware:      PIC24 Mikromedia
 Requires:      MLA 13-06
 ********************************************************************/

#include <xc.h>
#include "PICconfig.h"

#include <Graphics/Graphics.h>
#include <TouchScreen.h>
#include <M25P80.h>

#include <USB/usb.h>
#include <USB/usb_function_hid.h>


unsigned char RxBuffer[64];
unsigned char TxBuffer[64];

USB_HANDLE USBOutHandle = 0;    //USB handle.  Must be initialized to 0 at startup.
USB_HANDLE USBInHandle = 0;     //USB handle.  Must be initialized to 0 at startup.

BOOL LED1, LED2;

#define LED1X           90      // X coordinates
#define LED2X           230
#define LEDY            120     // Y coordinates
#define LEDR            30      // radius
#define mGetLED_1()     ( LED1)
#define mGetLED_2()     ( LED2)
#define mLED_1_On()     ( LED1 = 1, SetColor(   RED), FillCircle( LED1X, LEDY, LEDR) )
#define mLED_2_On()     ( LED2 = 1, SetColor( GREEN), FillCircle( LED2X, LEDY, LEDR) )
#define mLED_1_Off()    ( LED1 = 0, SetColor( WHITE), FillCircle( LED1X, LEDY, LEDR-10) )
#define mLED_2_Off()    ( LED2 = 0, SetColor( WHITE), FillCircle( LED2X, LEDY, LEDR-10) )
#define mLED_1_Toggle() if ( LED1)   mLED_1_Off(); else  mLED_1_On();
#define mLED_2_Toggle() if ( LED2)   mLED_2_Off(); else  mLED_2_On();


void ProcessIO(void)
{   
    // User Application USB tasks
    if ( USBGetDeviceState() < CONFIGURED_STATE) return;
    
    //Check if we have received an OUT data packet from the host
    if ( !HIDRxHandleBusy( USBOutHandle))
    {   
        // We just received a packet of data from the USB host.
        // Check the first byte of the packet to see what command the host sent
        switch( RxBuffer[0])            
        {
          case 0x80:  //Toggle LEDs command
            if( mGetLED_1() == mGetLED_2())
            {
                mLED_1_Toggle();
                mLED_2_Toggle();
            }
            break;

          case 0x81:  //Get push button state
            // Ensure the endpoint/buffer is free before we modify the contents
            if ( !HIDTxHandleBusy( USBInHandle))
            {
                TxBuffer[0] = 0x81;         // Echo back the command
                if( TouchGetX() >= 0)
                    TxBuffer[1] = 0x00;

                else
                    TxBuffer[1] = 0x01;

                //Prepare the USB module to send the data packet to the host
                USBInHandle = HIDTxPacket( HID_EP, (BYTE*)&TxBuffer[0], 64);
            }
            break;

          case 0x37:	// Read POT command.  Uses ADC to measure analog voltage
            {
                static SHORT w;
                SHORT t;

                // Ensure the endpoint/buffer is free before we modify the contents
                if ( !HIDTxHandleBusy( USBInHandle))
                {
                    t = TouchGetX();            // use the X touch position as analog value
                    if ( t >= 0)
                        w = t*3;                // scaled to approx range 1-1000

                    TxBuffer[0] = 0x37;  	// Echo back to the host the command
                    TxBuffer[1] = w;            // LSB
                    TxBuffer[2] = w>>8;  	// MSB

                    //Prepare the USB module to send the data packet to the host
                    USBInHandle = HIDTxPacket( HID_EP, (BYTE*)&TxBuffer[0], 64);
                }
            }
            break;
        }
        //Re-arm the OUT endpoint, so we can receive the next OUT data packet 
        //that the host may try to send us.
        USBOutHandle = HIDRxPacket( HID_EP, (BYTE*)&RxBuffer, 64);
    }  
} // ProcessIO


void DisplayUSBStatus(void)
{
    // No need to clear UIRbits.SOFIF to 0 here.
    // Callback caller is already doing that.
    static unsigned state = 0x1234;
    
    // check if status changed
    if (USBGetDeviceState() == state)  return;

    state = USBGetDeviceState();

    if ( USBSuspendControl == 0)
    {
        SetColor( BLACK);
        ClearDevice();
        SetColor( GREEN);
        OutTextXY( 0, 0, "HID - Mikromedia");

        if( state == DETACHED_STATE)
            OutText("Detached\n");

        else if( state == ATTACHED_STATE)
            OutText( "Attached\n");

        else if( state == POWERED_STATE)
            OutText( "Powered\n");

        else if( state == DEFAULT_STATE)
            OutText( "Default\n");

        else if( state == ADDRESS_STATE)
            OutText( "Address\n");

        else if( state == CONFIGURED_STATE)
            OutText( "Connected\n");
    }
} // DisplayUSBStatus


void InitializeSystem( void)
{
    //Init I/Os
    uMBInit();                  // SPI pps, disable analog inputs

    // init display
    LCDInit();
    DisplayBacklightOn();

    TickInit( 1);

    TouchInit( NVMWrite, NVMRead, NVMSectorErase, NULL);
    
} // Initialize System


int main(void)
{
    InitializeSystem();

    // init USB
    USBDeviceInit();            // Initializes USB module SFRs and firmware
    USBDeviceAttach();

    // wait for USB to connect
    while (USBDeviceState < CONFIGURED_STATE)
        DelayMs(100);
        DisplayUSBStatus();

    // Title and LEDs(!)
    LCDSetColor( BRIGHTRED);
    LCDSetBackground( WHITE);
    LCDClear();
    LCDCenterString( -4, "HID Simple Demo");
    mLED_1_On(); mLED_2_On();

    // main loop
    while(1)
    {
        ProcessIO();
    }
}//end main


// ************** USB Callback Functions ***********************************
void USBCBSuspend(void)
{
    //USBSleepOnSuspend();
}

void USBCBWakeFromSuspend(void)
{
}


void USBCB_SOF_Handler(void)
{
}

void USBCBCheckOtherReq(void)
{
    USBCheckHIDRequest();
}


void USBCBInitEP(void)
{
    //enable the HID endpoint
    USBEnableEndpoint(HID_EP,USB_IN_ENABLED|USB_OUT_ENABLED|USB_HANDSHAKE_ENABLED|USB_DISALLOW_SETUP);
    //Re-arm the OUT endpoint for the next packet
    USBOutHandle = HIDRxPacket(HID_EP,(BYTE*)&RxBuffer,64);
}


BOOL USER_USB_CALLBACK_EVENT_HANDLER(int event, void *pdata, WORD size)
{
    switch(event)
    {
        case EVENT_TRANSFER:
            //Add application specific callback task or callback function here if desired.
            break;

        case EVENT_SOF:
            USBCB_SOF_Handler();
            break;

        case EVENT_SUSPEND:
            USBCBSuspend();
            break;

        case EVENT_RESUME:
            USBCBWakeFromSuspend();
            break;

        case EVENT_CONFIGURED:
            USBCBInitEP();
            break;

        case EVENT_SET_DESCRIPTOR:
            break;

        case EVENT_EP0_REQUEST:
            USBCBCheckOtherReq();
            break;

        case EVENT_BUS_ERROR:
            break;

        case EVENT_TRANSFER_TERMINATED:
            break;
        default:
            break;
    }      
    return TRUE; 
} // Callback Event Handler

