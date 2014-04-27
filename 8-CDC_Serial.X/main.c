/********************************************************************
 Project:  8-CDC_Serial
 File:     main.c
 
 ********************************************************************/

#include <PICconfig.h>
#include <HardwareProfile.h>

#include <USB/usb.h>
#include <USB/usb_function_cdc.h>
#include <LCDTerminal.h>
#include <TouchScreen.h>
#include <M25P80.h>
#include <uMedia.h>


/** V A R I A B L E S ********************************************************/

volatile int Xvalue, Yvalue;


/********************************************************************/
static void InitializeSystem(void)
{
    DRV_SPI_INIT_DATA si = SPI_FLASH_CONFIG;

    uMBInit();

    // intialize the Serial Flash
    SST25_CS_LAT = 1;
    SST25_CS_TRIS = 0;
    FlashInit( &si);

    LCDInit(); DisplayBacklightOn();

    TouchInit( NVMWrite, NVMRead, NVMSectorErase, NULL);

}// InitializeSystem


/*******************************************************************/
void DisplayUSBStatus(void)
{
    static unsigned state = 0x1234;

    // check if status changed
    if (USBDeviceState == state)  return;

    state = USBDeviceState;

    // check if application connected but suspended
    if( USBSuspendControl == 0)
    {
        LCDClear();

        if(USBDeviceState == DETACHED_STATE)
        {
            LCDPutString( "Detached\n");
        }
        else if(USBDeviceState == ATTACHED_STATE)
        {
            LCDPutString( "Attached\n");
        }
        else if(USBDeviceState == POWERED_STATE)
        {
            LCDPutString( "Powered\n");
        }
        else if(USBDeviceState == DEFAULT_STATE)
        {
            LCDPutString( "Default\n");
        }
        else if(USBDeviceState == ADDRESS_STATE)
        {
            LCDPutString( "Address\n");
        }
        else if(USBDeviceState == CONFIGURED_STATE)
        {
            LCDPutString( "Connected\n");
        }
    }

}// DisplayUSBStatus



/*
 * a blocking double buffered puts function
 *
 */
void putsUSB( char *s)
{
    static char USB_To_Buffer[ 256];

    // ensure connected, active and ready to transmit
    while ( !USBUSARTIsTxTrfReady())
        ;

    // copy string into buffer
    strncpy( USB_To_Buffer, s, 255);

    // send
    putUSBUSART( USB_To_Buffer, strlen( s));
}


/*
 * a blocking gets function
 */
int getsUSBX( char *s)
{
    int n;

    while ( (n = getsUSBUSART( s, 64)) == 0);

    return n;
}

/*
 * a non blocking gets function
 */
int getsUSB( char *s)
{
    return getsUSBUSART( s, 64);
}

/********************************************************************/
void ProcessIO(void)
{   
    int i, n;
    char Send[255];
    char Receive[64];

    if ( Xvalue > 0)
    {
        sprintf( Send, "X = %3d  Y = %3d\r\n", Xvalue, Yvalue );
        putsUSB( Send);
        Xvalue = 0;      // clear flag
    }


    // check if receved data
    n = getsUSB( Receive);
    if( n != 0)
    {
        for( i=0; i<n; i++)
        {
            // print on local terminal
            LCDPutChar( Receive[i]);
            // echo
            Send[i] = Receive[i];
        }
        Send[ n] = 0;  // close the string

        // echo back to terminal
        putsUSB( Send);
    }

}	// ProcessIO


/*****************************************************************************/
int main(void)
{
    InitializeSystem();

    // Initializes USB module SFRs and firmware
    USBDeviceInit();
    USBDeviceAttach();
    while ( USBGetDeviceState() <  CONFIGURED_STATE)
                DisplayUSBStatus();
    DisplayUSBStatus();

    // display logo
    LCDCenterString( 0, "USB CDC Device demo!\n");
    LCDCenterString( 2, "Launch your terminal...\n");
    
    LCDPutString(">");

    // prompt terminal
    putsUSB( "\nHello CDC!\n>");

    // main loop
    while(1)
    {
        DisplayUSBStatus(); // Display Status changes
        ProcessIO();
    }
}//main


// ************** USB Callback Functions *************************************
void USBCBSuspend(void)
{
	// Insert appropriate code here for the desired
        //USBSleepOnSuspend();
}

void USBCBWakeFromSuspend(void)
{
        // The host allows
	// 10+ milliseconds of wakeup time, after which the device must be 
	// fully back to normal, and capable of receiving and processing USB
	// packets.  
}

void USBCB_SOF_Handler(void)
{
    static int debounce = 100;

    // service CDC state machine
    if ( USBGetDeviceState() == CONFIGURED_STATE)
        CDCTxService();

    // run the touch screen state machine
    TouchDetectPosition();

    // record an XY pair
    if( debounce != 0)
        debounce--;

    if ( TouchGetX() > 0)
    {
        if ( debounce == 0)
        {
            Xvalue = TouchGetX();
            Yvalue = TouchGetY();
            
            //Wait 100ms before the next press can be generated
            debounce = 100;
        }
    }
} // SOF Handler


void USBCBCheckOtherReq(void)
{
    USBCheckCDCRequest();
}


void USBCBInitEP(void)
{
    //Enable the CDC data endpoints
    CDCInitEP();
}

BOOL USER_USB_CALLBACK_EVENT_HANDLER(int event, void *pdata, WORD size)
{
    switch( event )
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
            //USBCBStdSetDscHandler();
            break;

        case EVENT_EP0_REQUEST:
            USBCBCheckOtherReq();
            break;

        case EVENT_BUS_ERROR:
            //USBCBErrorHandler();
            break;

        case EVENT_TRANSFER_TERMINATED:
            break;
        default:
            break;
    }      
    return TRUE; 
}


/** EOF main.c *************************************************/

