/*****************************************************************************
 * FileName:        GDD_Resource.c
 * Processor:       PIC24F, PIC24H, dsPIC
 * Compiler:        MPLAB C30/XC16 (see release notes for tested revision)
 * Linker:          MPLAB LINK30/XC16
 * Company:         Microchip Technology, Inc.
 *
 * Software License Agreement
 *
 * Copyright(c) 2012 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED ÒAS ISÓ WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY
 * OF MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR
 * PURPOSE. IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR
 * OBLIGATED UNDER CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION,
 * BREACH OF WARRANTY, OR OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT
 * DAMAGES OR EXPENSES INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL,
 * INDIRECT, PUNITIVE OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA,
 * COST OF PROCUREMENT OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY
 * CLAIMS BY THIRD PARTIES (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF),
 * OR OTHER SIMILAR COSTS.
 *
 *
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * AUTO-GENERATED CODE:  Graphics Resource Converter version: 3.29.03
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Includes
 *****************************************************************************/
#include <Graphics/Graphics.h>
#include "HardwareProfile.h"

/*****************************************************************************
 * SECTION:  Graphics Library Firmware Check
 *****************************************************************************/
#if(GRAPHICS_LIBRARY_VERSION != 0x0306)
#warning "It is suggested to use Graphics Library version 3.06 with this version of GRC."
#endif


/*****************************************************************************
 * Converted Resources
 * -------------------
 *
 *
 * Fonts
 * -----
 * LucidaSansUnicode_28 - Height: 44 pixels, 1 bit per pixel, Range: '0' to '9'
 * Gentium_16 - Height: 19 pixels, 1 bit per pixel, Range: ' ' to '~'
 *****************************************************************************/

/*****************************************************************************
 * SECTION:  Fonts
 *****************************************************************************/

/*********************************
 * Installed Font Structure
 * Label: LucidaSansUnicode_28
 * Description:  Height: 44 pixels, 1 bit per pixel, Range: '0' to '9'
 ***********************************/
#ifdef USE_GFX_FONT_IN_PROGRAM_SECTION
#ifndef GFX_CFG_USE_PROG_PACKED_FONT
extern GFX_FONT_SPACE char __LucidaSansUnicode_28[] __attribute__((section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __LucidaSansUnicode_28[] __attribute__((section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __LucidaSansUnicode_28[] __attribute__((aligned(2)));
#endif

const FONT_FLASH LucidaSansUnicode_28 =
{
    (FLASH | COMP_NONE),
    (GFX_FONT_SPACE char *)__LucidaSansUnicode_28
};

#ifdef USE_GFX_FONT_IN_PROGRAM_SECTION
#ifndef GFX_CFG_USE_PROG_PACKED_FONT
asm(".section grc_text, code");
#else
asm(".section grc_text, packedflash");
#endif
#else
asm(".section .const, psv, page");
#endif
asm(".global ___LucidaSansUnicode_28");
asm(".align 2");
asm("___LucidaSansUnicode_28:");
/****************************************
 * Font header
 ****************************************/
asm(".byte 0x00");           // Font ID
asm(".byte 0x00");           // Font information:  1 bit per pixel, Characters zero degress rotation
asm(".byte 0x30, 0x00");     // First Character
asm(".byte 0x39, 0x00");     // Last Character
asm(".byte 0x2C, 0x00");     // Height
/****************************************
 * Font Glyph Table
 ****************************************/
asm(".byte 0x12");              // width of the glyph
asm(".byte 0x30, 0x00, 0x00");       // Character - 48, offset (0x00000030)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0xB4, 0x00, 0x00");       // Character - 49, offset (0x000000B4)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0x38, 0x01, 0x00");       // Character - 50, offset (0x00000138)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0xBC, 0x01, 0x00");       // Character - 51, offset (0x000001BC)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0x40, 0x02, 0x00");       // Character - 52, offset (0x00000240)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0xC4, 0x02, 0x00");       // Character - 53, offset (0x000002C4)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0x48, 0x03, 0x00");       // Character - 54, offset (0x00000348)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0xCC, 0x03, 0x00");       // Character - 55, offset (0x000003CC)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0x50, 0x04, 0x00");       // Character - 56, offset (0x00000450)
asm(".byte 0x12");              // width of the glyph
asm(".byte 0xD4, 0x04, 0x00");       // Character - 57, offset (0x000004D4)
/***********************************
 * Font Characters
 ***********************************/
/***********************************
 * Character - 48
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xC0, 0x0F, 0x00");        //       ******            
asm(".byte 0xE0, 0x1F, 0x00");        //      ********           
asm(".byte 0xF8, 0x3F, 0x00");        //    ***********          
asm(".byte 0x78, 0x7C, 0x00");        //    ****   *****         
asm(".byte 0x3C, 0x78, 0x00");        //   ****     ****         
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x1C, 0xF0, 0x00");        //   ***       ****        
asm(".byte 0x1C, 0xF0, 0x00");        //   ***       ****        
asm(".byte 0x1E, 0xF0, 0x00");        //  ****       ****        
asm(".byte 0x1E, 0xE0, 0x00");        //  ****        ***        
asm(".byte 0x1E, 0xE0, 0x00");        //  ****        ***        
asm(".byte 0x1E, 0xF0, 0x00");        //  ****       ****        
asm(".byte 0x1C, 0xF0, 0x00");        //   ***       ****        
asm(".byte 0x1C, 0xF0, 0x00");        //   ***       ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x78, 0x78, 0x00");        //    ****    ****         
asm(".byte 0xF8, 0x7C, 0x00");        //    *****  *****         
asm(".byte 0xF0, 0x3F, 0x00");        //     **********          
asm(".byte 0xE0, 0x1F, 0x00");        //      ********           
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 49
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xE0, 0x07, 0x00");        //      ******             
asm(".byte 0xF0, 0x07, 0x00");        //     *******             
asm(".byte 0xF0, 0x07, 0x00");        //     *******             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 50
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xF0, 0x0F, 0x00");        //     ********            
asm(".byte 0xFC, 0x1F, 0x00");        //   ***********           
asm(".byte 0xFC, 0x3F, 0x00");        //   ************          
asm(".byte 0x1C, 0x7C, 0x00");        //   ***     *****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x7C, 0x00");        //           *****         
asm(".byte 0x00, 0x3E, 0x00");        //          *****          
asm(".byte 0x00, 0x1F, 0x00");        //         *****           
asm(".byte 0x80, 0x0F, 0x00");        //        *****            
asm(".byte 0xC0, 0x07, 0x00");        //       *****             
asm(".byte 0xE0, 0x03, 0x00");        //      *****              
asm(".byte 0xF0, 0x01, 0x00");        //     *****               
asm(".byte 0xF0, 0x00, 0x00");        //     ****                
asm(".byte 0x78, 0x00, 0x00");        //    ****                 
asm(".byte 0x7C, 0x00, 0x00");        //   *****                 
asm(".byte 0xFC, 0x7F, 0x00");        //   *************         
asm(".byte 0xFC, 0x7F, 0x00");        //   *************         
asm(".byte 0xFC, 0x7F, 0x00");        //   *************         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 51
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xF8, 0x0F, 0x00");        //    *********            
asm(".byte 0xF8, 0x1F, 0x00");        //    **********           
asm(".byte 0xF8, 0x3F, 0x00");        //    ***********          
asm(".byte 0x18, 0x3C, 0x00");        //    **     ****          
asm(".byte 0x00, 0x38, 0x00");        //            ***          
asm(".byte 0x00, 0x38, 0x00");        //            ***          
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x1F, 0x00");        //         *****           
asm(".byte 0xF0, 0x0F, 0x00");        //     ********            
asm(".byte 0xF0, 0x1F, 0x00");        //     *********           
asm(".byte 0xF0, 0x3F, 0x00");        //     **********          
asm(".byte 0x00, 0x3E, 0x00");        //          *****          
asm(".byte 0x00, 0x7C, 0x00");        //           *****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x7C, 0x00");        //           *****         
asm(".byte 0x1C, 0x7E, 0x00");        //   ***    ******         
asm(".byte 0xFC, 0x3F, 0x00");        //   ************          
asm(".byte 0xFC, 0x1F, 0x00");        //   ***********           
asm(".byte 0xF8, 0x07, 0x00");        //    ********             
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 52
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x3E, 0x00");        //          *****          
asm(".byte 0x00, 0x3F, 0x00");        //         ******          
asm(".byte 0x00, 0x3F, 0x00");        //         ******          
asm(".byte 0x80, 0x3F, 0x00");        //        *******          
asm(".byte 0xC0, 0x3F, 0x00");        //       ********          
asm(".byte 0xC0, 0x3F, 0x00");        //       ********          
asm(".byte 0xE0, 0x3D, 0x00");        //      **** ****          
asm(".byte 0xF0, 0x3C, 0x00");        //     ****  ****          
asm(".byte 0xF8, 0x3C, 0x00");        //    *****  ****          
asm(".byte 0x78, 0x3C, 0x00");        //    ****   ****          
asm(".byte 0x3C, 0x3C, 0x00");        //   ****    ****          
asm(".byte 0x1E, 0x3C, 0x00");        //  ****     ****          
asm(".byte 0xFE, 0xFF, 0x00");        //  ***************        
asm(".byte 0xFE, 0xFF, 0x00");        //  ***************        
asm(".byte 0xFE, 0xFF, 0x00");        //  ***************        
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 53
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xF8, 0x3F, 0x00");        //    ***********          
asm(".byte 0xF8, 0x3F, 0x00");        //    ***********          
asm(".byte 0xF8, 0x3F, 0x00");        //    ***********          
asm(".byte 0xF8, 0x3F, 0x00");        //    ***********          
asm(".byte 0x78, 0x00, 0x00");        //    ****                 
asm(".byte 0x78, 0x00, 0x00");        //    ****                 
asm(".byte 0x78, 0x00, 0x00");        //    ****                 
asm(".byte 0x78, 0x00, 0x00");        //    ****                 
asm(".byte 0xF8, 0x03, 0x00");        //    *******              
asm(".byte 0xF8, 0x0F, 0x00");        //    *********            
asm(".byte 0xF8, 0x1F, 0x00");        //    **********           
asm(".byte 0x00, 0x3F, 0x00");        //         ******          
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x7C, 0x00");        //           *****         
asm(".byte 0x18, 0x3E, 0x00");        //    **    *****          
asm(".byte 0xF8, 0x1F, 0x00");        //    **********           
asm(".byte 0xF8, 0x0F, 0x00");        //    *********            
asm(".byte 0xF8, 0x07, 0x00");        //    ********             
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 54
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xC0, 0x7F, 0x00");        //       *********         
asm(".byte 0xE0, 0x7F, 0x00");        //      **********         
asm(".byte 0xF0, 0x7F, 0x00");        //     ***********         
asm(".byte 0xF8, 0x60, 0x00");        //    *****     **         
asm(".byte 0x78, 0x00, 0x00");        //    ****                 
asm(".byte 0x3C, 0x00, 0x00");        //   ****                  
asm(".byte 0x3C, 0x00, 0x00");        //   ****                  
asm(".byte 0x3C, 0x00, 0x00");        //   ****                  
asm(".byte 0xFC, 0x1F, 0x00");        //   ***********           
asm(".byte 0xFE, 0x7F, 0x00");        //  **************         
asm(".byte 0xFE, 0x7F, 0x00");        //  **************         
asm(".byte 0x7E, 0xF8, 0x00");        //  ******    *****        
asm(".byte 0x3E, 0xF0, 0x00");        //  *****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x78, 0xF0, 0x00");        //    ****     ****        
asm(".byte 0xF8, 0x78, 0x00");        //    *****   ****         
asm(".byte 0xF0, 0x7F, 0x00");        //     ***********         
asm(".byte 0xE0, 0x1F, 0x00");        //      ********           
asm(".byte 0xC0, 0x0F, 0x00");        //       ******            
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 55
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xF8, 0xFF, 0x01");        //    **************       
asm(".byte 0xF8, 0xFF, 0x01");        //    **************       
asm(".byte 0xF8, 0xFF, 0x01");        //    **************       
asm(".byte 0xF8, 0xFF, 0x01");        //    **************       
asm(".byte 0x00, 0xF0, 0x00");        //             ****        
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x3C, 0x00");        //           ****          
asm(".byte 0x00, 0x1E, 0x00");        //          ****           
asm(".byte 0x00, 0x1E, 0x00");        //          ****           
asm(".byte 0x00, 0x0F, 0x00");        //         ****            
asm(".byte 0x00, 0x0F, 0x00");        //         ****            
asm(".byte 0x80, 0x07, 0x00");        //        ****             
asm(".byte 0xC0, 0x07, 0x00");        //       *****             
asm(".byte 0xC0, 0x03, 0x00");        //       ****              
asm(".byte 0xE0, 0x03, 0x00");        //      *****              
asm(".byte 0xE0, 0x01, 0x00");        //      ****               
asm(".byte 0xE0, 0x01, 0x00");        //      ****               
asm(".byte 0xF0, 0x01, 0x00");        //     *****               
asm(".byte 0xF0, 0x00, 0x00");        //     ****                
asm(".byte 0xF0, 0x00, 0x00");        //     ****                
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 56
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xC0, 0x1F, 0x00");        //       *******           
asm(".byte 0xF0, 0x3F, 0x00");        //     **********          
asm(".byte 0xF0, 0x7F, 0x00");        //     ***********         
asm(".byte 0x78, 0x78, 0x00");        //    ****    ****         
asm(".byte 0x78, 0xF0, 0x00");        //    ****     ****        
asm(".byte 0x78, 0xF0, 0x00");        //    ****     ****        
asm(".byte 0x78, 0x70, 0x00");        //    ****     ***         
asm(".byte 0xF8, 0x78, 0x00");        //    *****   ****         
asm(".byte 0xF0, 0x3F, 0x00");        //     **********          
asm(".byte 0xE0, 0x1F, 0x00");        //      ********           
asm(".byte 0xE0, 0x1F, 0x00");        //      ********           
asm(".byte 0xF0, 0x7F, 0x00");        //     ***********         
asm(".byte 0x78, 0xFE, 0x00");        //    ****  *******        
asm(".byte 0x3C, 0xF8, 0x00");        //   ****     *****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xE0, 0x00");        //   ****       ***        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0xFC, 0xF8, 0x00");        //   ******   *****        
asm(".byte 0xF8, 0x7F, 0x00");        //    ************         
asm(".byte 0xF0, 0x3F, 0x00");        //     **********          
asm(".byte 0xC0, 0x0F, 0x00");        //       ******            
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

/***********************************
 * Character - 57
 ***********************************/
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0xE0, 0x0F, 0x00");        //      *******            
asm(".byte 0xF0, 0x1F, 0x00");        //     *********           
asm(".byte 0xF8, 0x3F, 0x00");        //    ***********          
asm(".byte 0x78, 0x7C, 0x00");        //    ****   *****         
asm(".byte 0x3C, 0x78, 0x00");        //   ****     ****         
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x1C, 0xF0, 0x00");        //   ***       ****        
asm(".byte 0x1C, 0xF0, 0x00");        //   ***       ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x3C, 0xF0, 0x00");        //   ****      ****        
asm(".byte 0x7C, 0xF8, 0x00");        //   *****    *****        
asm(".byte 0xF8, 0xFF, 0x00");        //    *************        
asm(".byte 0xF8, 0xFF, 0x00");        //    *************        
asm(".byte 0xE0, 0xF7, 0x00");        //      ****** ****        
asm(".byte 0x00, 0xF0, 0x00");        //             ****        
asm(".byte 0x00, 0xF0, 0x00");        //             ****        
asm(".byte 0x00, 0x78, 0x00");        //            ****         
asm(".byte 0x00, 0x7C, 0x00");        //           *****         
asm(".byte 0x18, 0x3E, 0x00");        //    **    *****          
asm(".byte 0xF8, 0x1F, 0x00");        //    **********           
asm(".byte 0xF8, 0x0F, 0x00");        //    *********            
asm(".byte 0xF8, 0x07, 0x00");        //    ********             
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         
asm(".byte 0x00, 0x00, 0x00");        //                         

asm(".section .const, psv, page");
/*********************************
 * TTF Font File Structure
 * Label: Gentium_16
 * Description:  Height: 19 pixels, 1 bit per pixel, Range: ' ' to '~'
 ***********************************/
#ifdef USE_GFX_FONT_IN_PROGRAM_SECTION
#ifndef GFX_CFG_USE_PROG_PACKED_FONT
extern GFX_FONT_SPACE char __Gentium_16[] __attribute__((section("grc_text"), aligned(2)));
#else
extern GFX_FONT_SPACE char __Gentium_16[] __attribute__((section("grc_text")));
#endif
#else
extern GFX_FONT_SPACE char __Gentium_16[] __attribute__((aligned(2)));
#endif

const FONT_FLASH Gentium_16 =
{
    (FLASH | COMP_NONE),
    (GFX_FONT_SPACE char *)__Gentium_16
};

#ifdef USE_GFX_FONT_IN_PROGRAM_SECTION
#ifndef GFX_CFG_USE_PROG_PACKED_FONT
asm(".section grc_text, code");
#else
asm(".section grc_text, packedflash");
#endif
#else
asm(".section .const, psv, page");
#endif
asm(".global ___Gentium_16");
asm(".align 2");
asm("___Gentium_16:");
/****************************************
 * Font header
 ****************************************/
asm(".byte 0x00");           // Font ID
asm(".byte 0x00");           // Font information:  1 bit per pixel, Characters zero degress rotation
asm(".byte 0x20, 0x00");     // First Character
asm(".byte 0x7E, 0x00");     // Last Character
asm(".byte 0x13, 0x00");     // Height
/****************************************
 * Font Glyph Table
 ****************************************/
asm(".byte 0x04");              // width of the glyph
asm(".byte 0x84, 0x01, 0x00");       // Character - 32, offset (0x00000184)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0x97, 0x01, 0x00");       // Character - 33, offset (0x00000197)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0xAA, 0x01, 0x00");       // Character - 34, offset (0x000001AA)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xBD, 0x01, 0x00");       // Character - 35, offset (0x000001BD)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xD0, 0x01, 0x00");       // Character - 36, offset (0x000001D0)
asm(".byte 0x0B");              // width of the glyph
asm(".byte 0xE3, 0x01, 0x00");       // Character - 37, offset (0x000001E3)
asm(".byte 0x0B");              // width of the glyph
asm(".byte 0x09, 0x02, 0x00");       // Character - 38, offset (0x00000209)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0x2F, 0x02, 0x00");       // Character - 39, offset (0x0000022F)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x42, 0x02, 0x00");       // Character - 40, offset (0x00000242)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x55, 0x02, 0x00");       // Character - 41, offset (0x00000255)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0x68, 0x02, 0x00");       // Character - 42, offset (0x00000268)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0x7B, 0x02, 0x00");       // Character - 43, offset (0x0000027B)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0x8E, 0x02, 0x00");       // Character - 44, offset (0x0000028E)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0xA1, 0x02, 0x00");       // Character - 45, offset (0x000002A1)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0xB4, 0x02, 0x00");       // Character - 46, offset (0x000002B4)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xC7, 0x02, 0x00");       // Character - 47, offset (0x000002C7)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xDA, 0x02, 0x00");       // Character - 48, offset (0x000002DA)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xED, 0x02, 0x00");       // Character - 49, offset (0x000002ED)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x00, 0x03, 0x00");       // Character - 50, offset (0x00000300)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x13, 0x03, 0x00");       // Character - 51, offset (0x00000313)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x26, 0x03, 0x00");       // Character - 52, offset (0x00000326)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x39, 0x03, 0x00");       // Character - 53, offset (0x00000339)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x4C, 0x03, 0x00");       // Character - 54, offset (0x0000034C)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x5F, 0x03, 0x00");       // Character - 55, offset (0x0000035F)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x72, 0x03, 0x00");       // Character - 56, offset (0x00000372)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x85, 0x03, 0x00");       // Character - 57, offset (0x00000385)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0x98, 0x03, 0x00");       // Character - 58, offset (0x00000398)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0xAB, 0x03, 0x00");       // Character - 59, offset (0x000003AB)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0xBE, 0x03, 0x00");       // Character - 60, offset (0x000003BE)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0xD1, 0x03, 0x00");       // Character - 61, offset (0x000003D1)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0xE4, 0x03, 0x00");       // Character - 62, offset (0x000003E4)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0xF7, 0x03, 0x00");       // Character - 63, offset (0x000003F7)
asm(".byte 0x0D");              // width of the glyph
asm(".byte 0x0A, 0x04, 0x00");       // Character - 64, offset (0x0000040A)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0x30, 0x04, 0x00");       // Character - 65, offset (0x00000430)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0x56, 0x04, 0x00");       // Character - 66, offset (0x00000456)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0x7C, 0x04, 0x00");       // Character - 67, offset (0x0000047C)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0xA2, 0x04, 0x00");       // Character - 68, offset (0x000004A2)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xC8, 0x04, 0x00");       // Character - 69, offset (0x000004C8)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xDB, 0x04, 0x00");       // Character - 70, offset (0x000004DB)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0xEE, 0x04, 0x00");       // Character - 71, offset (0x000004EE)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0x14, 0x05, 0x00");       // Character - 72, offset (0x00000514)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x3A, 0x05, 0x00");       // Character - 73, offset (0x0000053A)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x4D, 0x05, 0x00");       // Character - 74, offset (0x0000054D)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0x60, 0x05, 0x00");       // Character - 75, offset (0x00000560)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x86, 0x05, 0x00");       // Character - 76, offset (0x00000586)
asm(".byte 0x0D");              // width of the glyph
asm(".byte 0x99, 0x05, 0x00");       // Character - 77, offset (0x00000599)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0xBF, 0x05, 0x00");       // Character - 78, offset (0x000005BF)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0xE5, 0x05, 0x00");       // Character - 79, offset (0x000005E5)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x0B, 0x06, 0x00");       // Character - 80, offset (0x0000060B)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0x1E, 0x06, 0x00");       // Character - 81, offset (0x0000061E)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0x44, 0x06, 0x00");       // Character - 82, offset (0x00000644)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x6A, 0x06, 0x00");       // Character - 83, offset (0x0000066A)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0x7D, 0x06, 0x00");       // Character - 84, offset (0x0000067D)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0xA3, 0x06, 0x00");       // Character - 85, offset (0x000006A3)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0xC9, 0x06, 0x00");       // Character - 86, offset (0x000006C9)
asm(".byte 0x0E");              // width of the glyph
asm(".byte 0xEF, 0x06, 0x00");       // Character - 87, offset (0x000006EF)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0x15, 0x07, 0x00");       // Character - 88, offset (0x00000715)
asm(".byte 0x0A");              // width of the glyph
asm(".byte 0x3B, 0x07, 0x00");       // Character - 89, offset (0x0000073B)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x61, 0x07, 0x00");       // Character - 90, offset (0x00000761)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x74, 0x07, 0x00");       // Character - 91, offset (0x00000774)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x87, 0x07, 0x00");       // Character - 92, offset (0x00000787)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x9A, 0x07, 0x00");       // Character - 93, offset (0x0000079A)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xAD, 0x07, 0x00");       // Character - 94, offset (0x000007AD)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xC0, 0x07, 0x00");       // Character - 95, offset (0x000007C0)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0xD3, 0x07, 0x00");       // Character - 96, offset (0x000007D3)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0xE6, 0x07, 0x00");       // Character - 97, offset (0x000007E6)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xF9, 0x07, 0x00");       // Character - 98, offset (0x000007F9)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0x0C, 0x08, 0x00");       // Character - 99, offset (0x0000080C)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x1F, 0x08, 0x00");       // Character - 100, offset (0x0000081F)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0x32, 0x08, 0x00");       // Character - 101, offset (0x00000832)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0x45, 0x08, 0x00");       // Character - 102, offset (0x00000845)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x58, 0x08, 0x00");       // Character - 103, offset (0x00000858)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0x6B, 0x08, 0x00");       // Character - 104, offset (0x0000086B)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0x91, 0x08, 0x00");       // Character - 105, offset (0x00000891)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0xA4, 0x08, 0x00");       // Character - 106, offset (0x000008A4)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xB7, 0x08, 0x00");       // Character - 107, offset (0x000008B7)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0xCA, 0x08, 0x00");       // Character - 108, offset (0x000008CA)
asm(".byte 0x0D");              // width of the glyph
asm(".byte 0xDD, 0x08, 0x00");       // Character - 109, offset (0x000008DD)
asm(".byte 0x09");              // width of the glyph
asm(".byte 0x03, 0x09, 0x00");       // Character - 110, offset (0x00000903)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x29, 0x09, 0x00");       // Character - 111, offset (0x00000929)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x3C, 0x09, 0x00");       // Character - 112, offset (0x0000093C)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x4F, 0x09, 0x00");       // Character - 113, offset (0x0000094F)
asm(".byte 0x06");              // width of the glyph
asm(".byte 0x62, 0x09, 0x00");       // Character - 114, offset (0x00000962)
asm(".byte 0x06");              // width of the glyph
asm(".byte 0x75, 0x09, 0x00");       // Character - 115, offset (0x00000975)
asm(".byte 0x06");              // width of the glyph
asm(".byte 0x88, 0x09, 0x00");       // Character - 116, offset (0x00000988)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x9B, 0x09, 0x00");       // Character - 117, offset (0x0000099B)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xAE, 0x09, 0x00");       // Character - 118, offset (0x000009AE)
asm(".byte 0x0B");              // width of the glyph
asm(".byte 0xC1, 0x09, 0x00");       // Character - 119, offset (0x000009C1)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xE7, 0x09, 0x00");       // Character - 120, offset (0x000009E7)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0xFA, 0x09, 0x00");       // Character - 121, offset (0x000009FA)
asm(".byte 0x07");              // width of the glyph
asm(".byte 0x0D, 0x0A, 0x00");       // Character - 122, offset (0x00000A0D)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x20, 0x0A, 0x00");       // Character - 123, offset (0x00000A20)
asm(".byte 0x04");              // width of the glyph
asm(".byte 0x33, 0x0A, 0x00");       // Character - 124, offset (0x00000A33)
asm(".byte 0x05");              // width of the glyph
asm(".byte 0x46, 0x0A, 0x00");       // Character - 125, offset (0x00000A46)
asm(".byte 0x08");              // width of the glyph
asm(".byte 0x59, 0x0A, 0x00");       // Character - 126, offset (0x00000A59)
/***********************************
 * Font Characters
 ***********************************/
/***********************************
 * Character - 32
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 33
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 34
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x36");        //  ** **  
asm(".byte 0x36");        //  ** **  
asm(".byte 0x36");        //  ** **  
asm(".byte 0x36");        //  ** **  
asm(".byte 0x36");        //  ** **  
asm(".byte 0x36");        //  ** **  
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 35
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x50");        //     * * 
asm(".byte 0x78");        //    **** 
asm(".byte 0x7C");        //   ***** 
asm(".byte 0xFE");        //  *******
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x1E");        //  ****   
asm(".byte 0x1E");        //  ****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 36
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x18");        //    **   
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7F");        // ******* 
asm(".byte 0x1F");        // *****   
asm(".byte 0x1F");        // *****   
asm(".byte 0x3E");        //  *****  
asm(".byte 0x78");        //    **** 
asm(".byte 0x78");        //    **** 
asm(".byte 0x7B");        // ** **** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x3F");        // ******  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x18");        //    **   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 37
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x1E, 0x03");        //  ****   **      
asm(".byte 0x9F, 0x03");        // *****  ***      
asm(".byte 0xDB, 0x01");        // ** ** ***       
asm(".byte 0xFB, 0x00");        // ** *****        
asm(".byte 0xFF, 0x03");        // **********      
asm(".byte 0xFE, 0x07");        //  **********     
asm(".byte 0xF8, 0x06");        //    ***** **     
asm(".byte 0xD8, 0x06");        //    ** ** **     
asm(".byte 0xDC, 0x06");        //   *** ** **     
asm(".byte 0xCE, 0x03");        //  ***  ****      
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 38
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0x6C, 0x00");        //   ** **         
asm(".byte 0x6C, 0x00");        //   ** **         
asm(".byte 0x3C, 0x00");        //   ****          
asm(".byte 0xDC, 0x07");        //   *** *****     
asm(".byte 0xFE, 0x07");        //  **********     
asm(".byte 0xBE, 0x01");        //  ***** **       
asm(".byte 0xF7, 0x01");        // *** *****       
asm(".byte 0xE7, 0x01");        // ***  ****       
asm(".byte 0xE7, 0x01");        // ***  ****       
asm(".byte 0xFE, 0x07");        //  **********     
asm(".byte 0x1C, 0x03");        //   ***   **      
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 39
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 40
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x18");        //    **   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0C");        //   **    
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x07");        // ***     
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x0C");        //   **    
asm(".byte 0x1C");        //   ***   
asm(".byte 0x18");        //    **   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 41
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x03");        // **      
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x07");        // ***     
asm(".byte 0x03");        // **      
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 42
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x18");        //    **   
asm(".byte 0x08");        //    *    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 43
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x3F");        // ******  
asm(".byte 0x7F");        // ******* 
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 44
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x07");        // ***     
asm(".byte 0x0F");        // ****    
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x02");        //  *      
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 45
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x1F");        // *****   
asm(".byte 0x1F");        // *****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 46
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 47
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0xE0");        //      ***
asm(".byte 0x60");        //      ** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x70");        //     *** 
asm(".byte 0x30");        //     **  
asm(".byte 0x38");        //    ***  
asm(".byte 0x38");        //    ***  
asm(".byte 0x18");        //    **   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x07");        // ***     
asm(".byte 0x07");        // ***     
asm(".byte 0x03");        // **      
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 48
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x76");        //  ** *** 
asm(".byte 0x3E");        //  *****  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 49
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1E");        //  ****   
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 50
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0x70");        //     *** 
asm(".byte 0x30");        //     **  
asm(".byte 0x38");        //    ***  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x4E");        //  ***  * 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 51
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3E");        //  *****  
asm(".byte 0x3F");        // ******  
asm(".byte 0x33");        // **  **  
asm(".byte 0x38");        //    ***  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x70");        //     *** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x73");        // **  *** 
asm(".byte 0x3F");        // ******  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 52
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x30");        //     **  
asm(".byte 0x38");        //    ***  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3E");        //  *****  
asm(".byte 0x36");        //  ** **  
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x30");        //     **  
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 53
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x3E");        //  *****  
asm(".byte 0x06");        //  **     
asm(".byte 0x3E");        //  *****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x72");        //  *  *** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x73");        // **  *** 
asm(".byte 0x3F");        // ******  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 54
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x78");        //    **** 
asm(".byte 0x3C");        //   ****  
asm(".byte 0x0E");        //  ***    
asm(".byte 0x3E");        //  *****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0x6E");        //  *** ** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x18");        //    **   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 55
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x30");        //     **  
asm(".byte 0x30");        //     **  
asm(".byte 0x38");        //    ***  
asm(".byte 0x18");        //    **   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0C");        //   **    
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 56
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0x3E");        //  *****  
asm(".byte 0x3E");        //  *****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x3E");        //  *****  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 57
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x77");        // *** *** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x70");        //     *** 
asm(".byte 0x38");        //    ***  
asm(".byte 0x1E");        //  ****   
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 58
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 59
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x07");        // ***     
asm(".byte 0x0F");        // ****    
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x02");        //  *      
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 60
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x60");        //      ** 
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x3F");        // ******  
asm(".byte 0x0F");        // ****    
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x78");        //    **** 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 61
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x00");        //         
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 62
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x07");        // ***     
asm(".byte 0x1F");        // *****   
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x78");        //    **** 
asm(".byte 0x3F");        // ******  
asm(".byte 0x07");        // ***     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 63
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7F");        // ******* 
asm(".byte 0x77");        // *** *** 
asm(".byte 0x73");        // **  *** 
asm(".byte 0x30");        //     **  
asm(".byte 0x38");        //    ***  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0C");        //   **    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 64
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xE0, 0x03");        //      *****      
asm(".byte 0xF8, 0x07");        //    ********     
asm(".byte 0x1C, 0x0E");        //   ***    ***    
asm(".byte 0xF6, 0x1F");        //  ** *********   
asm(".byte 0xF7, 0x1B");        // *** ****** **   
asm(".byte 0xBB, 0x1B");        // ** *** *** **   
asm(".byte 0x9B, 0x1B");        // ** **  *** **   
asm(".byte 0x9B, 0x1B");        // ** **  *** **   
asm(".byte 0xBF, 0x1B");        // ****** *** **   
asm(".byte 0xBF, 0x0F");        // ****** *****    
asm(".byte 0xFE, 0x0F");        //  ***********    
asm(".byte 0x7E, 0x0F");        //  ****** ****    
asm(".byte 0xFC, 0x0F");        //   **********    
asm(".byte 0xF8, 0x03");        //    *******      
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 65
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0x38, 0x00");        //    ***          
asm(".byte 0x38, 0x00");        //    ***          
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0x7C, 0x00");        //   *****         
asm(".byte 0x6C, 0x00");        //   ** **         
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0xFE, 0x00");        //  *******        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x01");        //  **   ***       
asm(".byte 0xCF, 0x03");        // ****  ****      
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 66
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x1C, 0x00");        //   ***           
asm(".byte 0x7F, 0x00");        // *******         
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0x66, 0x00");        //  **  **         
asm(".byte 0x7E, 0x00");        //  ******         
asm(".byte 0xFE, 0x00");        //  *******        
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0xFF, 0x00");        // ********        
asm(".byte 0x1E, 0x00");        //  ****           
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 67
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x20, 0x00");        //      *          
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0xEE, 0x00");        //  *** ***        
asm(".byte 0x07, 0x00");        // ***             
asm(".byte 0x03, 0x00");        // **              
asm(".byte 0x03, 0x00");        // **              
asm(".byte 0x03, 0x00");        // **              
asm(".byte 0x07, 0x00");        // ***             
asm(".byte 0x87, 0x00");        // ***    *        
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0xFE, 0x00");        //  *******        
asm(".byte 0x38, 0x00");        //    ***          
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 68
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x1C, 0x00");        //   ***           
asm(".byte 0xFF, 0x00");        // ********        
asm(".byte 0xE6, 0x01");        //  **  ****       
asm(".byte 0xC6, 0x01");        //  **   ***       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0xC6, 0x01");        //  **   ***       
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0x7F, 0x00");        // *******         
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 69
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7F");        // ******* 
asm(".byte 0x46");        //  **   * 
asm(".byte 0x06");        //  **     
asm(".byte 0x3E");        //  *****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x86");        //  **    *
asm(".byte 0xC6");        //  **   **
asm(".byte 0xFF");        // ********
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 70
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7F");        // ******* 
asm(".byte 0x46");        //  **   * 
asm(".byte 0x06");        //  **     
asm(".byte 0x3E");        //  *****  
asm(".byte 0x3E");        //  *****  
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1F");        // *****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 71
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x60, 0x00");        //      **         
asm(".byte 0xFC, 0x01");        //   *******       
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0x07, 0x00");        // ***             
asm(".byte 0x03, 0x00");        // **              
asm(".byte 0xE3, 0x01");        // **   ****       
asm(".byte 0xE3, 0x01");        // **   ****       
asm(".byte 0xC7, 0x01");        // ***   ***       
asm(".byte 0xC7, 0x01");        // ***   ***       
asm(".byte 0xCE, 0x01");        //  ***  ***       
asm(".byte 0xFE, 0x00");        //  *******        
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 72
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xCF, 0x03");        // ****  ****      
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0xFE, 0x01");        //  ********       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0xCF, 0x03");        // ****  ****      
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 73
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x1F");        // *****   
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1F");        // *****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 74
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x1E");        //  ****   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0F");        // ****    
asm(".byte 0x07");        // ***     
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 75
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xEF, 0x01");        // **** ****       
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0x76, 0x00");        //  ** ***         
asm(".byte 0x3E, 0x00");        //  *****          
asm(".byte 0x1E, 0x00");        //  ****           
asm(".byte 0x3E, 0x00");        //  *****          
asm(".byte 0x3E, 0x00");        //  *****          
asm(".byte 0x76, 0x00");        //  ** ***         
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0xCF, 0x01");        // ****  ***       
asm(".byte 0x80, 0x00");        //        *        
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 76
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x0F");        // ****    
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x86");        //  **    *
asm(".byte 0xC6");        //  **   **
asm(".byte 0xFF");        // ********
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 77
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x0F, 0x1E");        // ****     ****   
asm(".byte 0x0E, 0x0F");        //  ***    ****    
asm(".byte 0x1E, 0x0F");        //  ****   ****    
asm(".byte 0x1E, 0x0F");        //  ****   ****    
asm(".byte 0xBE, 0x0F");        //  ***** *****    
asm(".byte 0xB6, 0x0F");        //  ** ** *****    
asm(".byte 0xF6, 0x0F");        //  ** ********    
asm(".byte 0xF6, 0x0E");        //  ** **** ***    
asm(".byte 0xE6, 0x0E");        //  **  *** ***    
asm(".byte 0x6F, 0x1F");        // **** ** *****   
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 78
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xC7, 0x03");        // ***   ****      
asm(".byte 0x8E, 0x01");        //  ***   **       
asm(".byte 0x9E, 0x01");        //  ****  **       
asm(".byte 0xBE, 0x01");        //  ***** **       
asm(".byte 0xB6, 0x01");        //  ** ** **       
asm(".byte 0xF6, 0x01");        //  ** *****       
asm(".byte 0xE6, 0x01");        //  **  ****       
asm(".byte 0xC6, 0x01");        //  **   ***       
asm(".byte 0xC6, 0x01");        //  **   ***       
asm(".byte 0x8F, 0x01");        // ****   **       
asm(".byte 0x00, 0x01");        //         *       
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 79
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0xEE, 0x01");        //  *** ****       
asm(".byte 0x87, 0x01");        // ***    **       
asm(".byte 0x83, 0x01");        // **     **       
asm(".byte 0x83, 0x01");        // **     **       
asm(".byte 0x83, 0x01");        // **     **       
asm(".byte 0x87, 0x01");        // ***    **       
asm(".byte 0xC7, 0x01");        // ***   ***       
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0x38, 0x00");        //    ***          
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 80
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x1C");        //   ***   
asm(".byte 0x7F");        // ******* 
asm(".byte 0xE6");        //  **  ***
asm(".byte 0xC6");        //  **   **
asm(".byte 0xC6");        //  **   **
asm(".byte 0xFE");        //  *******
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1F");        // *****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 81
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0xEE, 0x01");        //  *** ****       
asm(".byte 0x87, 0x01");        // ***    **       
asm(".byte 0x83, 0x01");        // **     **       
asm(".byte 0x83, 0x01");        // **     **       
asm(".byte 0x83, 0x01");        // **     **       
asm(".byte 0x87, 0x01");        // ***    **       
asm(".byte 0xC7, 0x01");        // ***   ***       
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0xF8, 0x02");        //    ***** *      
asm(".byte 0xC0, 0x03");        //       ****      
asm(".byte 0x80, 0x03");        //        ***      
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 82
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x1C, 0x00");        //   ***           
asm(".byte 0x7F, 0x00");        // *******         
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0xF6, 0x00");        //  ** ****        
asm(".byte 0x7E, 0x00");        //  ******         
asm(".byte 0x3E, 0x00");        //  *****          
asm(".byte 0x76, 0x00");        //  ** ***         
asm(".byte 0x76, 0x00");        //  ** ***         
asm(".byte 0xE6, 0x00");        //  **  ***        
asm(".byte 0xCF, 0x01");        // ****  ***       
asm(".byte 0xC0, 0x00");        //       **        
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 83
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x18");        //    **   
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x76");        //  ** *** 
asm(".byte 0x06");        //  **     
asm(".byte 0x1E");        //  ****   
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x78");        //    **** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x77");        // *** *** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 84
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xFF, 0x01");        // *********       
asm(".byte 0x99, 0x01");        // *  **  **       
asm(".byte 0x18, 0x00");        //    **           
asm(".byte 0x18, 0x00");        //    **           
asm(".byte 0x18, 0x00");        //    **           
asm(".byte 0x18, 0x00");        //    **           
asm(".byte 0x18, 0x00");        //    **           
asm(".byte 0x18, 0x00");        //    **           
asm(".byte 0x18, 0x00");        //    **           
asm(".byte 0x7C, 0x00");        //   *****         
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 85
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xCF, 0x03");        // ****  ****      
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x8E, 0x01");        //  ***   **       
asm(".byte 0xDE, 0x01");        //  **** ***       
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 86
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xCF, 0x03");        // ****  ****      
asm(".byte 0x86, 0x01");        //  **    **       
asm(".byte 0x8E, 0x01");        //  ***   **       
asm(".byte 0xCC, 0x01");        //   **  ***       
asm(".byte 0xCC, 0x00");        //   **  **        
asm(".byte 0xDC, 0x00");        //   *** **        
asm(".byte 0xF8, 0x00");        //    *****        
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0x70, 0x00");        //     ***         
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 87
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xCF, 0x3E");        // ****  ** *****  
asm(".byte 0xE6, 0x18");        //  **  ***   **   
asm(".byte 0xE6, 0x0C");        //  **  ***  **    
asm(".byte 0xEE, 0x0D");        //  *** **** **    
asm(".byte 0xEE, 0x0D");        //  *** **** **    
asm(".byte 0xBC, 0x0D");        //   **** ** **    
asm(".byte 0xBC, 0x0F");        //   **** *****    
asm(".byte 0x3C, 0x07");        //   ****  ***     
asm(".byte 0x1C, 0x07");        //   ***   ***     
asm(".byte 0x18, 0x07");        //    **   ***     
asm(".byte 0x08, 0x02");        //    *     *      
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 88
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xEF, 0x03");        // **** *****      
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0x7C, 0x00");        //   *****         
asm(".byte 0x38, 0x00");        //    ***          
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0xEC, 0x00");        //   ** ***        
asm(".byte 0xCE, 0x01");        //  ***  ***       
asm(".byte 0xCF, 0x03");        // ****  ****      
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 89
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xC7, 0x03");        // ***   ****      
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0xFC, 0x00");        //   ******        
asm(".byte 0x7C, 0x00");        //   *****         
asm(".byte 0x78, 0x00");        //    ****         
asm(".byte 0x38, 0x00");        //    ***          
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0x30, 0x00");        //     **          
asm(".byte 0x7C, 0x00");        //   *****         
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 90
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xFE");        //  *******
asm(".byte 0xE7");        // ***  ***
asm(".byte 0x70");        //     *** 
asm(".byte 0x70");        //     *** 
asm(".byte 0x38");        //    ***  
asm(".byte 0x1C");        //   ***   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x8E");        //  ***   *
asm(".byte 0xC7");        // ***   **
asm(".byte 0xFF");        // ********
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 91
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x1E");        //  ****   
asm(".byte 0x1E");        //  ****   
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1E");        //  ****   
asm(".byte 0x1E");        //  ****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 92
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x03");        // **      
asm(".byte 0x03");        // **      
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x1C");        //   ***   
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x38");        //    ***  
asm(".byte 0x30");        //     **  
asm(".byte 0x70");        //     *** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x60");        //      ** 
asm(".byte 0xE0");        //      ***
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 93
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x0F");        // ****    
asm(".byte 0x0F");        // ****    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0F");        // ****    
asm(".byte 0x0F");        // ****    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 94
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x10");        //     *   
asm(".byte 0x18");        //    **   
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x76");        //  ** *** 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0xE7");        // ***  ***
asm(".byte 0x63");        // **   ** 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 95
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7F");        // ******* 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 96
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x03");        // **      
asm(".byte 0x07");        // ***     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x0C");        //   **    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 97
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3E");        //  *****  
asm(".byte 0x76");        //  ** *** 
asm(".byte 0x77");        // *** *** 
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x77");        // *** *** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x6E");        //  *** ** 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 98
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x07");        // ***     
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x7E");        //  ****** 
asm(".byte 0xFE");        //  *******
asm(".byte 0xE6");        //  **  ***
asm(".byte 0xC6");        //  **   **
asm(".byte 0xC6");        //  **   **
asm(".byte 0xC6");        //  **   **
asm(".byte 0x6E");        //  *** ** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 99
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x27");        // ***  *  
asm(".byte 0x03");        // **      
asm(".byte 0x03");        // **      
asm(".byte 0x07");        // ***     
asm(".byte 0x6F");        // **** ** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 100
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x40");        //       * 
asm(".byte 0x70");        //     *** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0xFF");        // ********
asm(".byte 0xFE");        //  *******
asm(".byte 0xDC");        //   *** **
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 101
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3C");        //   ****  
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x03");        // **      
asm(".byte 0x07");        // ***     
asm(".byte 0x6F");        // **** ** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 102
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x30");        //     **  
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x3C");        //   ****  
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1F");        // *****   
asm(".byte 0x1F");        // *****   
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1F");        // *****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 103
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xFE");        //  *******
asm(".byte 0xF6");        //  ** ****
asm(".byte 0x63");        // **   ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x3E");        //  *****  
asm(".byte 0x0E");        //  ***    
asm(".byte 0xFE");        //  *******
asm(".byte 0xF7");        // *** ****
asm(".byte 0xC3");        // **    **
asm(".byte 0xFF");        // ********
asm(".byte 0x7F");        // ******* 
asm(".byte 0x00");        //         

/***********************************
 * Character - 104
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x04, 0x00");        //   *             
asm(".byte 0x07, 0x00");        // ***             
asm(".byte 0x06, 0x00");        //  **             
asm(".byte 0x06, 0x00");        //  **             
asm(".byte 0x06, 0x00");        //  **             
asm(".byte 0xFE, 0x00");        //  *******        
asm(".byte 0xFE, 0x00");        //  *******        
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xEF, 0x01");        // **** ****       
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 105
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x07");        // ***     
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x0F");        // ****    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 106
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0E");        //  ***    
asm(".byte 0x0E");        //  ***    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0F");        // ****    
asm(".byte 0x07");        // ***     
asm(".byte 0x00");        //         

/***********************************
 * Character - 107
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x04");        //   *     
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0xF6");        //  ** ****
asm(".byte 0x76");        //  ** *** 
asm(".byte 0x3E");        //  *****  
asm(".byte 0x1E");        //  ****   
asm(".byte 0x1E");        //  ****   
asm(".byte 0x3E");        //  *****  
asm(".byte 0x76");        //  ** *** 
asm(".byte 0xEF");        // **** ***
asm(".byte 0xC0");        //       **
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 108
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x04");        //   *     
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x0F");        // ****    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 109
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x7F, 0x0F");        // ******* ****    
asm(".byte 0xFF, 0x0F");        // ************    
asm(".byte 0xEE, 0x0C");        //  *** ***  **    
asm(".byte 0xE6, 0x0C");        //  **  ***  **    
asm(".byte 0xE6, 0x0C");        //  **  ***  **    
asm(".byte 0xE6, 0x0C");        //  **  ***  **    
asm(".byte 0xE6, 0x0C");        //  **  ***  **    
asm(".byte 0xFF, 0x1F");        // *************   
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 110
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0xFF, 0x00");        // ********        
asm(".byte 0xFF, 0x00");        // ********        
asm(".byte 0xCE, 0x00");        //  ***  **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xC6, 0x00");        //  **   **        
asm(".byte 0xEF, 0x01");        // **** ****       
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 111
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0xE7");        // ***  ***
asm(".byte 0xC3");        // **    **
asm(".byte 0xC3");        // **    **
asm(".byte 0xE7");        // ***  ***
asm(".byte 0x6F");        // **** ** 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x1C");        //   ***   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 112
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xFF");        // ********
asm(".byte 0xFF");        // ********
asm(".byte 0xCE");        //  ***  **
asm(".byte 0xC6");        //  **   **
asm(".byte 0xC6");        //  **   **
asm(".byte 0xC6");        //  **   **
asm(".byte 0xEE");        //  *** ***
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x36");        //  ** **  
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1F");        // *****   
asm(".byte 0x00");        //         

/***********************************
 * Character - 113
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xFC");        //   ******
asm(".byte 0xFE");        //  *******
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x63");        // **   ** 
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x7C");        //   ***** 
asm(".byte 0x60");        //      ** 
asm(".byte 0x60");        //      ** 
asm(".byte 0xF0");        //     ****
asm(".byte 0x00");        //         

/***********************************
 * Character - 114
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3F");        // ******  
asm(".byte 0x3F");        // ******  
asm(".byte 0x2E");        //  *** *  
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x1F");        // *****   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 115
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x3E");        //  *****  
asm(".byte 0x3F");        // ******  
asm(".byte 0x07");        // ***     
asm(".byte 0x1E");        //  ****   
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3B");        // ** ***  
asm(".byte 0x33");        // **  **  
asm(".byte 0x3F");        // ******  
asm(".byte 0x0E");        //  ***    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 116
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x3F");        // ******  
asm(".byte 0x1F");        // *****   
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x36");        //  ** **  
asm(".byte 0x3E");        //  *****  
asm(".byte 0x0C");        //   **    
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 117
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xF7");        // *** ****
asm(".byte 0xE6");        //  **  ***
asm(".byte 0xE6");        //  **  ***
asm(".byte 0xE6");        //  **  ***
asm(".byte 0xE6");        //  **  ***
asm(".byte 0xE6");        //  **  ***
asm(".byte 0xF6");        //  ** ****
asm(".byte 0xFE");        //  *******
asm(".byte 0xDC");        //   *** **
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 118
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xEF");        // **** ***
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0x6E");        //  *** ** 
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 119
 ***********************************/
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x6F, 0x07");        // **** ** ***     
asm(".byte 0x67, 0x06");        // ***  **  **     
asm(".byte 0x76, 0x06");        //  ** ***  **     
asm(".byte 0xF6, 0x03");        //  ** ******      
asm(".byte 0xFE, 0x03");        //  *********      
asm(".byte 0xDC, 0x03");        //   *** ****      
asm(".byte 0xDC, 0x01");        //   *** ***       
asm(".byte 0x9C, 0x01");        //   ***  **       
asm(".byte 0x88, 0x01");        //    *   **       
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 
asm(".byte 0x00, 0x00");        //                 

/***********************************
 * Character - 120
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xFF");        // ********
asm(".byte 0x6E");        //  *** ** 
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x76");        //  ** *** 
asm(".byte 0xFF");        // ********
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 121
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xEF");        // **** ***
asm(".byte 0x67");        // ***  ** 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0x6E");        //  *** ** 
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x3C");        //   ****  
asm(".byte 0x18");        //    **   
asm(".byte 0x18");        //    **   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0F");        // ****    
asm(".byte 0x07");        // ***     
asm(".byte 0x00");        //         

/***********************************
 * Character - 122
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x7E");        //  ****** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x3B");        // ** ***  
asm(".byte 0x18");        //    **   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x4E");        //  ***  * 
asm(".byte 0x66");        //  **  ** 
asm(".byte 0x7F");        // ******* 
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 123
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x10");        //     *   
asm(".byte 0x1C");        //   ***   
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0F");        // ****    
asm(".byte 0x0F");        // ****    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x0C");        //   **    
asm(".byte 0x1C");        //   ***   
asm(".byte 0x10");        //     *   
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 124
 ***********************************/
asm(".byte 0x04");        //   *     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x02");        //  *      
asm(".byte 0x00");        //         

/***********************************
 * Character - 125
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x03");        // **      
asm(".byte 0x07");        // ***     
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x1E");        //  ****   
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x06");        //  **     
asm(".byte 0x0E");        //  ***    
asm(".byte 0x0E");        //  ***    
asm(".byte 0x06");        //  **     
asm(".byte 0x07");        // ***     
asm(".byte 0x03");        // **      
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

/***********************************
 * Character - 126
 ***********************************/
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0xDE");        //  **** **
asm(".byte 0xFF");        // ********
asm(".byte 0x7B");        // ** **** 
asm(".byte 0x31");        // *   **  
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         
asm(".byte 0x00");        //         

asm(".section .const, psv, page");
