/*
 * File:   HardwareProfile.h
 *
 * Hardware platform: PIC32 Mikromedia board
 */

#ifndef _HARDWARE_PROFILE_H
#define _HARDWARE_PROFILE_H

#define uMPIC32    432

#include <xc.h>
//#include <adc.h>


/*********************************************************************
 * PIC24 clock 
 ********************************************************************/
#define GetSystemClock()            (80000000ull)
#define GetInstructionClock()       GetSystemClock()

/*********************************************************************
* Macro: #define	GetPeripheralClock()
*
* Overview: This macro returns the peripheral clock frequency used in Hertz.
* value for PIC32 is <PRE>(GetSystemClock()/(1<<OSCCONbits.PBDIV)) </PRE>
*
********************************************************************/
#define	GetPeripheralClock()		(GetSystemClock()/(1<<OSCCONbits.PBDIV))


/*********************************************************************
*  Graphics Panel configuration for the MikroE- PIC24 uMB Board
********************************************************************/
#define GRAPHICS_HARDWARE_PLATFORM      uMPIC32

/*********************************************************************
 * Horizontal and vertical display resolution
 *********************************************************************/
#define DISP_HOR_RESOLUTION             240
#define DISP_VER_RESOLUTION             320

// display type MIO283QT2 - HX8347D controller - 8-bit PMP interface
#define GFX_USE_DISPLAY_CONTROLLER_HX8347D

// display type MIO283QT-9A - ILI9341 controller - 8-bit PMP interface
//#define GFX_USE_DISPLAY_CONTROLLER_IL9341

// interface
#define USE_GFX_PMP
#define USE_16BIT_PMP
#define PMP_DATA_SETUP_TIME             (10)
#define PMP_DATA_WAIT_TIME              (10)
#define PMP_DATA_HOLD_TIME              (10)

/*********************************************************************
 * Image orientation (can be 0, 90, 180, 270 degrees).
 *********************************************************************/
#define DISP_ORIENTATION                90 // landscape

/*********************************************************************
 * IOs for the Display Controller
 *********************************************************************/
// Definitions for reset pin
#define DisplayResetConfig()        _TRISC1 = 0
#define DisplayResetEnable()        _LATC1  = 0
#define DisplayResetDisable()       _LATC1  = 1

// Definitions for RS pin
#define DisplayCmdDataConfig()      _TRISB15 = 0
#define DisplaySetCommand()         _LATB15  = 0
#define DisplaySetData()            _LATB15  = 1

// Definitions for CS pin
#define DisplayConfig()             _TRISF12 = 0
#define DisplayEnable()             _LATF12  = 0
#define DisplayDisable()            _LATF12  = 1

// Definitions for Backlight control pin
#define DisplayBacklightConfig()    _TRISA9 = 0
#define DisplayBacklightOff()       _LATA9  = 0
#define DisplayBacklightOn()        _LATA9  = 1

/*********************************************************************
 * IOs for the Touch Screen
 *********************************************************************/

#define USE_TOUCHSCREEN_RESISTIVE

#define TOUCH_ADC_INPUT_SEL   AD1CHS

// ADC Sample Start
#define TOUCH_ADC_START   AD1CON1bits.SAMP

// ADC Status
#define TOUCH_ADC_DONE   AD1CON1bits.DONE

// Analog inputs definitions
#define ADC_XPOS    ADC_CH0_POS_SAMPLEA_AN13
#define ADC_YPOS    ADC_CH0_POS_SAMPLEA_AN12

#define ADPCFG_XPOS AD1PCFGbits.PCFG13
#define ADPCFG_YPOS AD1PCFGbits.PCFG12

#define RESISTIVETOUCH_ANALOG  0
#define RESISTIVETOUCH_DIGITAL 1

// X port definitions
#define ResistiveTouchScreen_XPlus_Drive_High()         LATBbits.LATB13   = 1
#define ResistiveTouchScreen_XPlus_Drive_Low()          LATBbits.LATB13   = 0
#define ResistiveTouchScreen_XPlus_Config_As_Input()    TRISBbits.TRISB13 = 1
#define ResistiveTouchScreen_XPlus_Config_As_Output()   TRISBbits.TRISB13 = 0

#define ResistiveTouchScreen_XMinus_Drive_High()        LATBbits.LATB11   = 1
#define ResistiveTouchScreen_XMinus_Drive_Low()         LATBbits.LATB11   = 0
#define ResistiveTouchScreen_XMinus_Config_As_Input()   TRISBbits.TRISB11 = 1
#define ResistiveTouchScreen_XMinus_Config_As_Output()  TRISBbits.TRISB11 = 0

// Y port definitions
#define ResistiveTouchScreen_YPlus_Drive_High()         LATBbits.LATB12   = 1
#define ResistiveTouchScreen_YPlus_Drive_Low()          LATBbits.LATB12   = 0
#define ResistiveTouchScreen_YPlus_Config_As_Input()    TRISBbits.TRISB12 = 1
#define ResistiveTouchScreen_YPlus_Config_As_Output()   TRISBbits.TRISB12 = 0

#define ResistiveTouchScreen_YMinus_Drive_High()        LATBbits.LATB10   = 1
#define ResistiveTouchScreen_YMinus_Drive_Low()         LATBbits.LATB10   = 0
#define ResistiveTouchScreen_YMinus_Config_As_Input()   TRISBbits.TRISB10 = 1
#define ResistiveTouchScreen_YMinus_Config_As_Output()  TRISBbits.TRISB10 = 0

// serial Flash calibration addresses
#define ADDRESS_RESISTIVE_TOUCH_VERSION	(unsigned long)0xFFFFFFFE
#define ADDRESS_RESISTIVE_TOUCH_ULX     (unsigned long)0xFFFFFFFC
#define ADDRESS_RESISTIVE_TOUCH_ULY     (unsigned long)0xFFFFFFFA
#define ADDRESS_RESISTIVE_TOUCH_URX     (unsigned long)0xFFFFFFF8
#define ADDRESS_RESISTIVE_TOUCH_URY     (unsigned long)0xFFFFFFF6

#define ADDRESS_RESISTIVE_TOUCH_LLX     (unsigned long)0xFFFFFFF4
#define ADDRESS_RESISTIVE_TOUCH_LLY     (unsigned long)0xFFFFFFF2
#define ADDRESS_RESISTIVE_TOUCH_LRX     (unsigned long)0xFFFFFFF0
#define ADDRESS_RESISTIVE_TOUCH_LRY     (unsigned long)0xFFFFFFEE

// define the functions to call for the non-volatile memory
// check out touch screen module for definitions of the following function pointers
// used: NVM_READ_FUNC, NVM_WRITE_FUNC & NVM_SECTORERASE_FUNC
#define NVMSectorErase      ((NVM_SECTORERASE_FUNC)&SST25SectorErase)
#define NVMWrite            ((NVM_WRITE_FUNC)&SST25WriteWord)
#define NVMRead             ((NVM_READ_FUNC)&SST25ReadWord)
#define FlashInit(pInitData) SST25Init((DRV_SPI_INIT_DATA*)pInitData)

/*********************************************************************
 * IOs for Serial Flash
 **********************************************************************/
#define USE_M25P80
#define SPI_CHANNEL_2_ENABLE
#define SST25_CS_TRIS   _TRISC2
#define SST25_CS_LAT    _LATC2

#define ERASE_SECTOR_SIZE   65536
#define SPI_FLASH_CONFIG    { 2, 3, 6, 0, 1, 1, 0}

/*********************************************************************
 * IOs for the micro SD card interface
 *********************************************************************/

#define USE_SD_INTERFACE_WITH_SPI

    // Registers for the SPI module 
    #define MDD_USE_SPI_2

    // MDD SPI Configuration

    // Description: SD-SPI Chip Select Output bit
    #define SD_CS               _LATG9
    // Description: SD-SPI Chip Select TRIS bit
    #define SD_CS_TRIS          _TRISG9

    // Description: SD-SPI Card Detect Input bit
    #define SD_CD               _RF13
    // Description: SD-SPI Card Detect TRIS bit
    #define SD_CD_TRIS          _TRISF13

    // Description: SD-SPI Write Protect Check Input bit
    #define SD_WE               0
    // Description: SD-SPI Write Protect Check TRIS bit
    #define SD_WE_TRIS          _TRISF13         // assigned to other input pin!

    // Description: The main SPI control register
    #define SPICON1             SPI2CON
    // Description: The SPI status register
    #define SPISTAT             SPI2STAT
    // Description: The SPI Buffer
    #define SPIBUF              SPI2BUF
    // Description: The receive buffer full bit in the SPI status register
    #define SPISTAT_RBF         SPI2STATbits.SPIRBF
    // Description: The bitwise define for the SPI control register (i.e. _____bits)
    #define SPICON1bits         SPI2CONbits
    // Description: The bitwise define for the SPI status register (i.e. _____bits)
    #define SPISTATbits         SPI2STATbits
    // Description: The enable bit for the SPI module
    #define SPIENABLE           SPI2CONbits.ON
    // Description: The definition for the SPI baud rate generator register (PIC32)
    #define SPIBRG		SPI2BRG

    // Tris pins for SCK/SDI/SDO lines
    // Description: The TRIS bit for the SCK pin
    #define SPICLOCK            TRISGbits.TRISG6
    // Description: The TRIS bit for the SDI pin
    #define SPIIN               TRISGbits.TRISG7
    // Description: The TRIS bit for the SDO pin
    #define SPIOUT              TRISGbits.TRISG8


    #define SPI_START_CFG_1     (PRI_PRESCAL_64_1 | SEC_PRESCAL_8_1 | MASTER_ENABLE_ON | SPI_CKE_ON | SPI_SMP_ON)
    #define SPI_START_CFG_2     (SPI_ENABLE)

    // Define the SPI frequency
    #define SPI_FREQUENCY	(20000000)

    //SPI library functions
    #define putcSPI             putcSPI2
    #define getcSPI             getcSPI2
    #define OpenSPI(config1, config2)   OpenSPI2(config1, config2)

    // Will generate an error if the clock speed is too low to interface to the card
    #if (GetSystemClock() < 100000)
        #error Clock speed must exceed 100 kHz
    #endif


/*********************************************************************
* IOS FOR THE VS1053 MP3 decoder
*********************************************************************/
// SPI2 is shared with uSD card in "VS1002 native mode"

#define MP3_RST_Config()        _TRISD9 = 0     // o reset decoder
#define MP3_RST_Enable()        _LATD9 = 0
#define MP3_RST_Disable()       _LATD9 = 1

#define MP3_DREQ                _RD8            // i request for data

#define MP3_DCS_Config()        _TRISB8 = 0    // o data select
#define MP3_DCS_Enable()        _LATB8 = 0
#define MP3_DCS_Disable()       _LATB8 = 1

#define MP3_CS_Config()         _TRISG15 = 0     // o command select
#define MP3_CS_Enable()         _LATG15 = 0
#define MP3_CS_Disable()        _LATG15 = 1

#define MP3_START_CFG_1     (PRI_PRESCAL_64_1 | SEC_PRESCAL_8_1 | MASTER_ENABLE_ON | SPI_CKE_ON | SPI_SMP_ON)
#define MP3_START_CFG_2     (SPI_ENABLE)
#define MP3_FAST_CFG_1      (PRI_PRESCAL_1_1  | SEC_PRESCAL_8_1 | MASTER_ENABLE_ON | SPI_CKE_ON | SPI_SMP_ON)

/*********************************************************************
 * USB configuration: self powered
 *********************************************************************/
#define self_power          1   // return always 1
#define USB_BUS_SENSE       1   // return always 1


/*******************************************************************
 * MDD File System selection options
 *******************************************************************/
//    #define USE_INTERNAL_FLASH

    #define ERASE_BLOCK_SIZE        1024
    #define WRITE_BLOCK_SIZE        128

#endif // HARDWARE_PROFILE_H
