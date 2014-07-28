/*********************************************************************
 *
 *	Hardware specific definitions
 *
 *********************************************************************
 * FileName:        HardwareProfile.h
 * Dependencies:    None
 * Processor:       PIC24, dsPIC, PIC32
 * Compiler:        Microchip C30 and C32
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright (c) 2011 Microchip Technology Inc.  All rights 
 * reserved.
 *
 * Microchip licenses to you the right to use, modify, copy, and 
 * distribute: 
 * (i)  the Software when embedded on a Microchip microcontroller or 
 *      digital signal controller product ("Device") which is 
 *      integrated into Licensee�s product; or
 * (ii) ONLY the Software driver source files ENC28J60.c and 
 *      ENC28J60.h ported to a non-Microchip device used in 
 *      conjunction with a Microchip ethernet controller for the 
 *      sole purpose of interfacing with the ethernet controller. 
 *
 * You should refer to the license agreement accompanying this 
 * Software for additional information regarding your rights and 
 * obligations.
 *
 * THE SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT 
 * WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT 
 * LIMITATION, ANY WARRANTY OF MERCHANTABILITY, FITNESS FOR A 
 * PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT SHALL 
 * MICROCHIP BE LIABLE FOR ANY INCIDENTAL, SPECIAL, INDIRECT OR 
 * CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF 
 * PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY OR SERVICES, ANY CLAIMS 
 * BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE 
 * THEREOF), ANY CLAIMS FOR INDEMNITY OR CONTRIBUTION, OR OTHER 
 * SIMILAR COSTS, WHETHER ASSERTED ON THE BASIS OF CONTRACT, TORT 
 * (INCLUDING NEGLIGENCE), BREACH OF WARRANTY, OR OTHERWISE.
 *
 *
 * Date	                Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 10/03/06             Original, copied from Compiler.h
 * 06/25/09             dsPIC & PIC24H support 
 * 09/15/09             Added PIC24FJ256DA210 Development Board Support
 * 06/02/11             Added MPLAB X Support
 ********************************************************************/

#if defined (__PIC24F__) || defined(__dsPIC33F__) || defined(__PIC24H__)

	#if defined (__PIC24FJ256DA210__)
		/*********************************************************************
	     * Hardware Configuration for 
	     * PIC24FJ256DA210 Development Board
	     * Display TFT-G240320LTSW-118W-E
	     ********************************************************************/
		#include "Configs/HWP_DA210_BRD_16PMP_QVGAv1.h"
		
		/*********************************************************************
	     * Hardware Configuration for 
	     * PIC24FJ256DA210 Development Board
	     * Display PH480272T-005-I11Q
	     ********************************************************************/
		//#include "Configs/HWP_DA210_BRD_16PMP_WQVGAv1.h"

	#else
	
		#if defined (__PIC24FJ256GB110__)
		
			/*********************************************************************
			 * Hardware Configuration for 
			 * MIKRO MMB for PIC24
			 * only selectable when using PIC24FJ256GB110
			 ********************************************************************/
			#include "Configs/HWP_MIKRO_8PMP.h"

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
                        #define SD_CD               _RA6
                        // Description: SD-SPI Card Detect TRIS bit
                        #define SD_CD_TRIS          _TRISA6

                        // Description: SD-SPI Write Protect Check Input bit
                        #define SD_WE               0
                        // Description: SD-SPI Write Protect Check TRIS bit
                        #define SD_WE_TRIS          _TRISA6         // assigned to other input pin!

                        // Description: The main SPI control register
                        #define SPICON1             SPI2CON1
                        // Description: The SPI status register
                        #define SPISTAT             SPI2STAT
                        // Description: The SPI Buffer
                        #define SPIBUF              SPI2BUF
                        // Description: The receive buffer full bit in the SPI status register
                        #define SPISTAT_RBF         SPI2STATbits.SPIRBF
                        // Description: The bitwise define for the SPI control register (i.e. _____bits)
                        #define SPICON1bits         SPI2CON1bits
                        // Description: The bitwise define for the SPI status register (i.e. _____bits)
                        #define SPISTATbits         SPI2STATbits
                        // Description: The enable bit for the SPI module
                        #define SPIENABLE           SPI2STATbits.SPIEN

                        // Tris pins for SCK/SDI/SDO lines
                        // Description: The TRIS bit for the SCK pin
                        #define SPICLOCK            TRISGbits.TRISG6
                        // Description: The TRIS bit for the SDI pin
                        #define SPIIN               TRISGbits.TRISG7
                        // Description: The TRIS bit for the SDO pin
                        #define SPIOUT              TRISGbits.TRISG8

                        //#define OpenSPI(config1, config2)   OpenSPI2(config1, config2)

                        // Will generate an error if the clock speed is too low to interface to the card
                        //#if (GetSystemClock() < 100000)
                        //    #error Clock speed must exceed 100 kHz
                        //#endif




		#endif	
	
		/*********************************************************************
	     * Hardware Configuration for 
	     * Explorer 16
    	 * Graphics PicTail v3
	     * Display TFT-G240320LTSW-118W-E
	     ********************************************************************/
		#include "Configs/HWP_GFXv3_EX16_8PMP_QVGAv1.h"
		//#include "Configs/HWP_GFXv3_EX16_16PMP_QVGAv1.h"

		/*********************************************************************
	     * Hardware Configuration for 
	     * Explorer 16
    	 * Graphics PicTail v3
	     * Display PH480272T-005-I11Q
	     ********************************************************************/
		//#include "Configs/HWP_GFXv3_EX16_8PMP_WQVGAv1.h"
		//#include "Configs/HWP_GFXv3_EX16_16PMP_WQVGAv1.h"

		/*********************************************************************
		 * Hardware Configuration for
		 * Exlporer 16 or PIC32 Starter kit   
		 * Graphics PicTail v3e
		 * Display VGA
		 ********************************************************************/
			//#include "Configs/HWP_GFXv3e_EX16_8PMP_VGAv1.h"
			//#include "Configs/HWP_GFXv3e_EX16_16PMP_VGAv1.h"
		/*********************************************************************
		 * Hardware Configuration for
		 * Exlporer 16 or PIC32 Starter kit   
		 * Graphics PicTail v3e
		 * Display VGA
		 * AR1020 Touch Controller
		 ********************************************************************/
			  //#include "Configs/HWP_GFXv3e_EX16_16PMP_AR1020_VGAv1.h"

		/*********************************************************************
		 * Hardware Configuration for 
		 * Explorer 16 or PIC32 Starter kit
		 * Graphics PicTail v3e
		 * Display WVGA
		 ********************************************************************/
			//#include "Configs/HWP_GFXv3e_EX16_8PMP_WVGAv1.h"
			  //#include "Configs/HWP_GFXv3e_EX16_16PMP_WVGAv1.h"
	#endif

#elif defined (__PIC32MX__) || defined (__dsPIC33E__) || defined(__PIC24E__) 

    /*********************************************************************
     * Hardware Configuration for 
     * Explorer 16
     * Graphics PicTail v3
     * Display TFT-G240320LTSW-118W-E
     ********************************************************************/
    #include "Configs/HWP_GFXv3_EX16_8PMP_QVGAv1.h"
	//#include "Configs/HWP_GFXv3_EX16_16PMP_QVGAv1.h"

    /*********************************************************************
     * Hardware Configuration for 
     * Explorer 16
     * Graphics PicTail v3
     * Display PH480272T-005-I11Q
     ********************************************************************/
	//#include "Configs/HWP_GFXv3_EX16_8PMP_WQVGAv1.h"
	//#include "Configs/HWP_GFXv3_EX16_16PMP_WQVGAv1.h"

    /*********************************************************************
     * Hardware Configuration for 
     * Starter Kit
     * Graphics PicTail v3
     * Display TFT-G240320LTSW-118W-E
     ********************************************************************/
	//#include "Configs/HWP_GFXv3_PIC_SK_8PMP_QVGAv1.h"
	//#include "Configs/HWP_GFXv3_PIC_SK_16PMP_QVGAv1.h"

    /*********************************************************************
     * Hardware Configuration for 
     * Starter Kit
     * Graphics PicTail v3
     * Display PH480272T-005-I11Q
     ********************************************************************/
	//#include "Configs/HWP_GFXv3_PIC_SK_8PMP_WQVGAv1.h"
	//#include "Configs/HWP_GFXv3_PIC_SK_16PMP_WQVGAv1.h"
	
    /*********************************************************************
     * Hardware Configuration for 
     * Starter Kit
     * MultiMedia Development Board
     * Display TFT-G240320LTSW-118W-E
     ********************************************************************/
    //#include "Configs/HWP_MEB_PIC32_STK_8PMP.h"
    //#include "Configs/HWP_MEB_PIC32_USB_SK_8PMP.h"
    //#include "Configs/HWP_MEB_PIC32_ETH_SK_8PMP.h"

    //#include "Configs/HWP_MEB_PIC32_GP_SK_16PMP.h"
    //#include "Configs/HWP_MEB_PIC32_USB_SK_16PMP.h"
    //#include "Configs/HWP_MEB_PIC32_ETH_SK_16PMP.h"
    
    //#include "Configs/HWP_MEB_dsPIC33E_SK_8PMP.h"

    /*********************************************************************
     * Hardware Configuration for 
     * Low Cost Controllerless (LCC) Daughter Board
     * Display TFT-G240320LTSW-118W-E
     ********************************************************************/
     //#include "Configs/HWP_LCC_EX16_INT_QVGAv1.h"
     //#include "Configs/HWP_LCC_EX16_EXT_QVGAv1.h"
     //#include "Configs/HWP_LCC_EX16_EXT_WQVGAv1.h"

    // #include "Configs/HWP_LCC_PIC_SK_INT_QVGAv1.h"
    // #include "Configs/HWP_LCC_PIC_SK_EXT_QVGAv1.h"
    // #include "Configs/HWP_LCC_PIC_SK_EXT_WQVGAv1.h"
    // #include "Configs/HWP_LCC_PIC_SK_EXT_VGAv1.h"

	/*********************************************************************
     * Hardware Configuration for
     * PIC32 Starter kit   
     * Graphics PicTail v3e
     * Display VGA
     * AR1020 Touch Controller
     ********************************************************************/
     //#include "Configs/HWP_GFXv3e_PIC_SK_16PMP_AR1020_VGAv1.h"

    /*********************************************************************
     * Hardware Configuration for
     * Exlporer 16 or PIC32 Starter kit   
     * Graphics PicTail v3e
     * Display VGA
     ********************************************************************/
	 //#include "Configs/HWP_GFXv3e_EX16_8PMP_VGAv1.h"
     //#include "Configs/HWP_GFXv3e_EX16_16PMP_VGAv1.h"
	 //#include "Configs/HWP_GFXv3e_PIC_SK_8PMP_VGAv1.h"
     //#include "Configs/HWP_GFXv3e_PIC_SK_16PMP_VGAv1.h"

    /*********************************************************************
     * Hardware Configuration for 
     * Explorer 16 or PIC32 Starter kit
     * Graphics PicTail v3e
     * Display WVGA
     ********************************************************************/
	 //#include "Configs/HWP_GFXv3e_EX16_8PMP_WVGAv1.h"
     //#include "Configs/HWP_GFXv3e_EX16_16PMP_WVGAv1.h"
	 //#include "Configs/HWP_GFXv3e_PIC_SK_8PMP_WVGAv1.h"
     //#include "Configs/HWP_GFXv3e_PIC_SK_16PMP_WVGAv1.h"
#endif


    
