/*****************************************************************************
 *  Module for Microchip Graphics Library
 *  IL9341 controller driver
 *****************************************************************************
 * FileName:        IL9341.c
 * Processor:       PIC24, dsPIC, PIC32
 * Compiler:        MPLAB C30, MPLAB C32
 * Company:         Microchip Technology Incorporated
 *
 * Software License Agreement
 *
 * Copyright (c) 2011 Microchip Technology Inc.  All rights reserved.
 * Microchip licenses to you the right to use, modify, copy and distribute
 * Software only when embedded on a Microchip microcontroller or digital
 * signal controller, which is integrated into your product or third party
 * product (pursuant to the sublicense terms in the accompanying license
 * agreement).  
 *
 * You should refer to the license agreement accompanying this Software
 * for additional information regarding your rights and obligations.
 *
 * SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
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
 * Date         Comment
 *~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 * 05/26/09     ...
 * 04/12/11     Graphics Library Version 3.00 Support
 * 10/09/11     Fixed WritePixel() in USE_16BIT_PMP mode
 * 02/29/12     1 BPP PutImage() routines processes images with reversed 
 *              bitfields. 
 * 03/05/12     - Enabled transparency support for PutImage()
 *              - Fixed problems with PutImage() when stretch = 2.
 *              - Added GetPixel() function.   
 * 07/02/12     Modified PutImageXBPPYYY() functions to use new API.
 * 10/01/13     Ported to IL9341
 *****************************************************************************/
#include "HardwareProfile.h"

#if defined GFX_USE_DISPLAY_CONTROLLER_IL9341

#include "Compiler.h"
#include "TimeDelay.h"
#include "Graphics/DisplayDriver.h"
#include "Graphics/IL9341.h"
#include "Graphics/Primitive.h"

#if defined (USE_GFX_PMP)
    #include "Graphics/gfxpmp.h"
#elif defined (USE_GFX_EPMP)
    #include "Graphics/gfxepmp.h"
#endif   

// Clipping region control
SHORT       _clipRgn;

// Clipping region borders
SHORT       _clipLeft;
SHORT       _clipTop;
SHORT       _clipRight;
SHORT       _clipBottom; 

// Color
GFX_COLOR   _color;
#ifdef USE_TRANSPARENT_COLOR
GFX_COLOR   _colorTransparent;
SHORT       _colorTransparentEnable;
#endif

//#define USE_PRIMITIVE_PUTIMAGE
#ifndef USE_PRIMITIVE_PUTIMAGE
    #warning "This driver does not support partial putImage feature. To enable partial putimage feature, uncomment the macro USE_PRIMITIVE_PUTIMAGE in this file. This will enable the PutImageXBPPYYY() in the Primitive.c implementation."
#endif

/////////////////////// LOCAL FUNCTIONS PROTOTYPES ////////////////////////////
void    SetReg(BYTE index, BYTE value);

#ifndef USE_PRIMITIVE_PUTIMAGE
void    PutImage1BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);
void    PutImage4BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);
void    PutImage8BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);
void    PutImage16BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);

void    PutImage1BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);
void    PutImage4BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);
void    PutImage8BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);
void    PutImage16BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData);
#endif

/*********************************************************************
* Macros:  WritePixel(data)
*
* Overview: Writes data
*
* PreCondition: none
*
* Input: data
*
* Output: none
*
* Side Effects: none
*
********************************************************************/

#ifdef USE_16BIT_PMP
#define WritePixel(data)  DisplaySetData(); DeviceWrite(data)
#else
#define WritePixel(data) \
    DisplaySetData(); \
    DeviceWrite(((WORD_VAL)data).v[1]);\
    DeviceWrite(((WORD_VAL)data).v[0]);
#endif

/*********************************************************************
* Function:  void SetAddress(SHORT x, SHORT y)
*
* Overview: Writes address pointer.
*
* PreCondition: none
*
* Input: x - horizontal position
*        y - vertical position
*
* Output: none
*
* Side Effects: none
*
********************************************************************/
inline void SetAddress(SHORT x, SHORT y)
{
	DisplaySetCommand();
    DeviceWrite(0x2A);
	DisplaySetData();
    DeviceWrite(((WORD_VAL) (WORD) x).v[1]);
    DeviceWrite(((WORD_VAL) (WORD) x).v[0]);
	DisplaySetCommand();
    DeviceWrite(0x2B);
	DisplaySetData();
    DeviceWrite(((WORD_VAL) (WORD) y).v[1]);
    DeviceWrite(((WORD_VAL) (WORD) y).v[0]);
	DisplaySetCommand();
    DeviceWrite(0x2C);
}

/*********************************************************************
* Function:  void  SetReg(BYTE index, BYTE value)
*
* PreCondition: none
*
* Input: index - register number
*        value - value to be set
*
* Output: none
*
* Side Effects: none
*
* Overview: sets graphics controller register
*
* Note: none
*
********************************************************************/
void write_cmd(BYTE index)
{
    DisplayEnable();
    DisplaySetCommand();
    DeviceWrite(index);
    DisplaySetData();
}

/*********************************************************************
* Function:  void ResetDevice()
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: resets LCD, initializes PMP
*
* Note: none
*
********************************************************************/
void ResetDevice(void)
{
    // Initialize the device
    DriverInterfaceInit();
    DelayMs( 1);	// delay to let controller ready for next command
	
    write_cmd(0x01);    // software reset
    DisplayDisable();

    DelayMs( 5);
    write_cmd(0x28);    // display off
    DisplayDisable();

    write_cmd(0xcf);    
    DeviceWrite(0x00);
    DeviceWrite(0x83);
    DeviceWrite(0x30);
    DisplayDisable();

    write_cmd(0xed);
    DeviceWrite(0x64);
    DeviceWrite(0x03);
    DeviceWrite(0x12);
    DeviceWrite(0x81);
    DisplayDisable();

    write_cmd(0xe8);
    DeviceWrite(0x85);
    DeviceWrite(0x01);
    DeviceWrite(0x79);
    DisplayDisable();

    write_cmd(0xcb);
    DeviceWrite(0x39);
    DeviceWrite(0x2c);
    DeviceWrite(0x00);
    DeviceWrite(0x34);
    DeviceWrite(0x02);
    DisplayDisable();

    write_cmd(0xf7);
    DeviceWrite(0x20);
    DisplayDisable();

    write_cmd(0xea);
    DeviceWrite(0x00);
    DeviceWrite(0x00);
    DisplayDisable();

    //------------power control------------------------------
    write_cmd(0xc0);    // power control
    DeviceWrite(0x26);
    DisplayDisable();

    write_cmd(0xc1);    // power control
    DeviceWrite(0x11);
    DisplayDisable();

    //--------------VCOM           ---------
    write_cmd(0xc5);    // vcom control
    DeviceWrite(0x35);  // 35
    DeviceWrite(0x3e);  // 3E
    DisplayDisable();

    write_cmd(0xc7);    // vcom control
    DeviceWrite(0xbe);  // 0x94
    DisplayDisable();

    //------------memory access control------------------------
    write_cmd(0x36);    // memory access control
#if (DISP_ORIENTATION == 0)
    DeviceWrite(0x58);  //  my,MX,mv,ML,BGR,mh,0,0
#else
    DeviceWrite(0x38);  //  my,mx,MV,ML,BGR,mh,0,0
#endif
    DisplayDisable();

    write_cmd(0x3a);    // pixel format set
    DeviceWrite(0x55);  // 16bit /pixel
    DisplayDisable();

    //----------------- frame rate------------------------------
    write_cmd(0xb1);    // frame rate
    DeviceWrite(0x00);
    DeviceWrite(0x1B);  //70
    DisplayDisable();

    //----------------Gamma---------------------------------
    write_cmd(0xf2);    // 3Gamma Function Disable
    DeviceWrite(0x08);
    DisplayDisable();

    write_cmd(0x26);
    DeviceWrite(0x01);  // gamma set 4 gamma curve 01/02/04/08
    DisplayDisable();

    write_cmd(0xE0);    // positive gamma correction
    DeviceWrite(0x1f);
    DeviceWrite(0x1a);
    DeviceWrite(0x18);
    DeviceWrite(0x0a);
    DeviceWrite(0x0f);
    DeviceWrite(0x06);
    DeviceWrite(0x45);
    DeviceWrite(0x87);
    DeviceWrite(0x32);
    DeviceWrite(0x0a);
    DeviceWrite(0x07);
    DeviceWrite(0x02);
    DeviceWrite(0x07);
    DeviceWrite(0x05);
    DeviceWrite(0x00);
    DisplayDisable();

    write_cmd(0xE1);    // negamma correction
    DeviceWrite(0x00);
    DeviceWrite(0x25);
    DeviceWrite(0x27);
    DeviceWrite(0x05);
    DeviceWrite(0x10);
    DeviceWrite(0x09);
    DeviceWrite(0x3a);
    DeviceWrite(0x78);
    DeviceWrite(0x4d);
    DeviceWrite(0x05);
    DeviceWrite(0x18);
    DeviceWrite(0x0d);
    DeviceWrite(0x38);
    DeviceWrite(0x3a);
    DeviceWrite(0x1f);
    DisplayDisable();

//--------------ddram ---------------------
    write_cmd(0x2a);    // column set
    DeviceWrite(0x00);
    DeviceWrite(0x00);
#if (DISP_ORIENTATION == 0)
    DeviceWrite(0x00);
    DeviceWrite(0xEF);  // XMax  = 240
#else
    DeviceWrite(0x01);
    DeviceWrite(0x3F);  // XMax = 320
#endif
    DisplayDisable();

    write_cmd(0x2b);    // page address set
    DeviceWrite(0x00);
    DeviceWrite(0x00);
#if (DISP_ORIENTATION == 0)

    DeviceWrite(0x01);
    DeviceWrite(0x3F);  // YMax = 320
#else
    DeviceWrite(0x01);
    DeviceWrite(0x3F);  // YMax = 240
#endif
    DisplayDisable();

    //write_cmd(0x34);  // tearing effect off
    //write_cmd(0x35);  // tearing effect on
    //write_cmd(0xb4);  // display inversion
    //DeviceWrite(0x00);

    write_cmd(0xb7);    // entry mode set
    DeviceWrite(0x07);
    DisplayDisable();

//-----------------display---------------------
    write_cmd(0xb6);    // display function control
    DeviceWrite(0x0a);
    DeviceWrite(0x82);
    DeviceWrite(0x27);
    DeviceWrite(0x00);
    write_cmd(0x11);    // sleep out, enable DC/DC conv.
    DisplayDisable();
    DelayMs(100);

    write_cmd(0x29);    // display on
    DisplayDisable();
    DelayMs(100);

    write_cmd(0x2c);    // memory write
} // Reset Device



#ifdef USE_TRANSPARENT_COLOR
/*********************************************************************
* Function:  void TransparentColorEnable(GFX_COLOR color)
*
* Overview: Sets current transparent color.
*
* PreCondition: none
*
* Input: color - Color value chosen.
*
* Output: none
*
* Side Effects: none
*
********************************************************************/
void TransparentColorEnable(GFX_COLOR color)
{
    _colorTransparent = color;    
    _colorTransparentEnable = TRANSPARENT_COLOR_ENABLE;

}
#endif

/*********************************************************************
* Function: void PutPixel(SHORT x, SHORT y)
*
* PreCondition: none
*
* Input: x,y - pixel coordinates
*
* Output: none
*
* Side Effects: none
*
* Overview: puts pixel
*
* Note: none
*
********************************************************************/
void PutPixel(SHORT x, SHORT y)
{
    if(_clipRgn)
    {
        if(x < _clipLeft)
            return;
        if(x > _clipRight)
            return;
        if(y < _clipTop)
            return;
        if(y > _clipBottom)
            return;
    }

    DisplayEnable();
    SetAddress(x, y);
    WritePixel(_color);
    DisplayDisable();
}

/*********************************************************************
* Function: GFX_COLOR GetPixel(SHORT x, SHORT y)
*
* PreCondition: none
*
* Input: x,y - pixel coordinates 
*
* Output: pixel color
*
* Side Effects: none
*
* Overview: return pixel color at x,y position
*
* Note: This implementation assumes an 8bit Data interface. 
*       For other data interface, this function should be modified.
*
********************************************************************/
GFX_COLOR GetPixel(SHORT x, SHORT y)
{
    BYTE red = 0, green = 0, blue = 0;
    
    DisplayEnable();
    SetAddress(x, y);

    DisplaySetData(); 
    // dummy reads
    SingleDeviceRead();
    SingleDeviceRead();

    // read RED
	red = SingleDeviceRead();
    // read GREEN
	green = SingleDeviceRead();
    // read BLUE
	blue = SingleDeviceRead();

    DisplayDisable();

    return ((WORD) (((((GFX_COLOR)(red) & 0xF8) >> 3) << 11) | ((((GFX_COLOR)(green) & 0xFC) >> 2) << 5) | (((GFX_COLOR)(blue) & 0xF8) >> 3))); 
}

/*********************************************************************
* Function: IsDeviceBusy()
*
* Overview: Returns non-zero if LCD controller is busy 
*           (previous drawing operation is not completed).
*
* PreCondition: none
*
* Input: none
*
* Output: Busy status.
*
* Side Effects: none
*
********************************************************************/
WORD IsDeviceBusy(void)
{  
    return (0);
}

/*********************************************************************
* Function: WORD Bar(SHORT left, SHORT top, SHORT right, SHORT bottom)
*
* PreCondition: none
*
* Input: left,top - top left corner coordinates,
*        right,bottom - bottom right corner coordinates
*
* Output: none
*
* Side Effects: none
*
* Overview: draws rectangle filled with current color
*
* Note: none
*
********************************************************************/
WORD Bar(SHORT left, SHORT top, SHORT right, SHORT bottom)
{
    register SHORT  x, y;

    if(_clipRgn)
    {
        if(left < _clipLeft)
            left = _clipLeft;
        if(right > _clipRight)
            right = _clipRight;
        if(top < _clipTop)
            top = _clipTop;
        if(bottom > _clipBottom)
            bottom = _clipBottom;
    }

    DisplayEnable();
    for(y = top; y < bottom + 1; y++)
    {
        SetAddress(left, y);
        for(x = left; x < right + 1; x++)
        {
            WritePixel(_color);
        }
    }

    DisplayDisable();
    return (1);
}

/*********************************************************************
* Function: void ClearDevice(void)
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: clears screen with current color 
*
* Note: none
*
********************************************************************/
void ClearDevice(void)
{
    DWORD   counter;

    DisplayEnable();
    SetAddress(0, 0);
    for(counter = 0; counter < (DWORD) (GetMaxX() + 1) * (GetMaxY() + 1); counter++)
    {
        WritePixel(_color);
    }

    DisplayDisable();
}

#ifndef USE_PRIMITIVE_PUTIMAGE

    #ifdef USE_BITMAP_FLASH

/*********************************************************************
* Function: void PutImage1BPP(SHORT left, SHORT top, FLASH_BYTE* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs monochrome image starting from left,top coordinates
*
* Note: image must be located in flash
*
********************************************************************/
void PutImage1BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register FLASH_BYTE *flashAddress;
    register FLASH_BYTE *tempFlashAddress;
    BYTE                temp = 0;
    WORD                sizeX, sizeY;
    WORD                x, y, currentXLocation;
    BYTE                stretchX, stretchY;
    WORD                pallete[2];
    BYTE                mask;

    // Move pointer to size information
    flashAddress = image + 2;

    // Read image size
    sizeY = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;
    sizeX = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;
    pallete[0] = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;
    pallete[1] = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;

    DisplayEnable();
    for(y = 0; y < sizeY; y++)
    {
        tempFlashAddress = flashAddress;
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            flashAddress = tempFlashAddress;
            SetAddress((WORD) left, (WORD) top);
            mask = 0;
            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {

                // Read 8 pixels from flash
                if(mask == 0)
                {
                    temp = *flashAddress;
                    flashAddress++;
                    mask = 0x01;
                }

                // Set color
                if(mask & temp)
                {
                    SetColor(pallete[1]);
                }
                else
                {
                    SetColor(pallete[0]);
                }

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation , top);
                    }
                    else
#endif              
                    {
                        currentXLocation++;
                        WritePixel(_color);
                    }
                }

                // Shift to the next pixel
                mask <<= 1;
            }

            top++;
        }
    }

    DisplayDisable();
}

/*********************************************************************
* Function: void PutImage4BPP(SHORT left, SHORT top, FLASH_BYTE* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs 16 color image starting from left,top coordinates
*
* Note: image must be located in flash
*
********************************************************************/
void PutImage4BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register FLASH_BYTE *flashAddress;
    register FLASH_BYTE *tempFlashAddress;
    WORD                sizeX, sizeY;
    register WORD       x, y, currentXLocation;
    BYTE                temp = 0;
    register BYTE       stretchX, stretchY;
    WORD                pallete[16];
    WORD                counter;

    // Move pointer to size information
    flashAddress = image + 2;

    // Read image size
    sizeY = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;
    sizeX = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;

    // Read pallete
    for(counter = 0; counter < 16; counter++)
    {
        pallete[counter] = *((FLASH_WORD *)flashAddress);
        flashAddress += 2;
    }

    DisplayEnable();
    for(y = 0; y < sizeY; y++)
    {
        tempFlashAddress = flashAddress;
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            flashAddress = tempFlashAddress;
            SetAddress(left, top);
            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {

                // Read 2 pixels from flash
                if(x & 0x0001)
                {

                    // second pixel in byte
                    SetColor(pallete[temp >> 4]);
                }
                else
                {
                    temp = *flashAddress;
                    flashAddress++;

                    // first pixel in byte
                    SetColor(pallete[temp & 0x0f]);
                }

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation, top);
                    }
                    else
#endif
                    {
                        WritePixel(_color);
                        currentXLocation++;
                    }
                }
            }

            top++;
        }
    }

    DisplayDisable();

}

/*********************************************************************
* Function: void PutImage8BPP(SHORT left, SHORT top, FLASH_BYTE* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs 256 color image starting from left,top coordinates
*
* Note: image must be located in flash
*
********************************************************************/
void PutImage8BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register FLASH_BYTE *flashAddress;
    register FLASH_BYTE *tempFlashAddress;
    WORD                sizeX, sizeY;
    WORD                x, y, currentXLocation;
    BYTE                temp;
    BYTE                stretchX, stretchY;
    WORD                pallete[256];
    WORD                counter;

    // Move pointer to size information
    flashAddress = image + 2;

    // Read image size
    sizeY = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;
    sizeX = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;

    // Read pallete
    for(counter = 0; counter < 256; counter++)
    {
        pallete[counter] = *((FLASH_WORD *)flashAddress);
        flashAddress += 2;
    }

    DisplayEnable();
    for(y = 0; y < sizeY; y++)
    {
        tempFlashAddress = flashAddress;
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            flashAddress = tempFlashAddress;
            SetAddress(left, top);
            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {

                // Read pixels from flash
                temp = *flashAddress;
                flashAddress++;

                // Set color
                SetColor(pallete[temp]);

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation, top);
                    }
                    else
#endif
                    {
                        WritePixel(_color);
                        currentXLocation++;
                    }
                }
            }

            top++;
        }
    }

    DisplayDisable();
}

/*********************************************************************
* Function: void PutImage16BPP(SHORT left, SHORT top, FLASH_BYTE* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs hicolor image starting from left,top coordinates
*
* Note: image must be located in flash
*
********************************************************************/
void PutImage16BPP(SHORT left, SHORT top, FLASH_BYTE *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register FLASH_WORD *flashAddress;
    register FLASH_WORD *tempFlashAddress;
    WORD                sizeX, sizeY;
    register WORD       x, y, currentXLocation;
    WORD                temp;
    register BYTE       stretchX, stretchY;

    // Move pointer to size information
    flashAddress = (FLASH_WORD *)image + 1;

    // Read image size
    sizeY = *flashAddress;
    flashAddress++;
    sizeX = *flashAddress;
    flashAddress++;

    DisplayEnable();
    for(y = 0; y < sizeY; y++)
    {
        tempFlashAddress = flashAddress;
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            flashAddress = tempFlashAddress;
            SetAddress(left, top);
            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {

                // Read pixels from flash
                temp = *flashAddress;
                flashAddress++;

                // Set color
                SetColor(temp);

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation, top);
                    }
                    else
#endif
                    {
                        WritePixel(_color);
                        currentXLocation++;
                    }
                }
            }

            top++;
        }
    }

    DisplayDisable();
}

    #endif // USE_BITMAP_FLASH
    #ifdef USE_BITMAP_EXTERNAL


/*********************************************************************
* Function: void PutImage1BPPExt(SHORT left, SHORT top, void* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs monochrome image starting from left,top coordinates
*
* Note: image must be located in external memory
*
********************************************************************/
void PutImage1BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register DWORD  memOffset;
    BITMAP_HEADER   bmp;
    WORD            pallete[2];
    BYTE            lineBuffer[((GetMaxX() + 1) / 8) + 1];
    BYTE            *pData;
    SHORT           byteWidth;

    BYTE            temp = 0;
    BYTE            mask;
    WORD            sizeX, sizeY;
    WORD            x, y, currentXLocation;
    BYTE            stretchX, stretchY;

    // Get image header
    ExternalMemoryCallback(image, 0, sizeof(BITMAP_HEADER), &bmp);

    // Get pallete (2 entries)
    ExternalMemoryCallback(image, sizeof(BITMAP_HEADER), 2 * sizeof(WORD), pallete);

    // Set offset to the image data
    memOffset = sizeof(BITMAP_HEADER) + 2 * sizeof(WORD);

    // Line width in bytes
    byteWidth = bmp.width >> 3;
    if(bmp.width & 0x0007)
        byteWidth++;

    // Get size
    sizeX = bmp.width;
    sizeY = bmp.height;

    for(y = 0; y < sizeY; y++)
    {

        // Get line
        ExternalMemoryCallback(image, memOffset, byteWidth, lineBuffer);
        memOffset += byteWidth;
        DisplayEnable();
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            pData = lineBuffer;
            SetAddress(left, top);
            mask = 0;
            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {

                // Read 8 pixels from flash
                if(mask == 0)
                {
                    temp = *pData++;
                    mask = 0x01;
                }

                // Set color
                if(mask & temp)
                {
                    SetColor(pallete[1]);
                }
                else
                {
                    SetColor(pallete[0]);
                }

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation, top);
                    }
                    else
#endif
                    {
                        WritePixel(_color);
                        currentXLocation++;
                    }
                }

                // Shift to the next pixel
                mask <<= 1;
            }

            top++;
        }

        DisplayDisable();
    }
}

/*********************************************************************
* Function: void PutImage4BPPExt(SHORT left, SHORT top, void* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs monochrome image starting from left,top coordinates
*
* Note: image must be located in external memory
*
********************************************************************/
void PutImage4BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register DWORD  memOffset;
    BITMAP_HEADER   bmp;
    WORD            pallete[16];
    BYTE            lineBuffer[((GetMaxX() + 1) / 2) + 1];
    BYTE            *pData;
    SHORT           byteWidth;

    BYTE            temp = 0;
    WORD            sizeX, sizeY;
    WORD            x, y, currentXLocation;
    BYTE            stretchX, stretchY;

    // Get image header
    ExternalMemoryCallback(image, 0, sizeof(BITMAP_HEADER), &bmp);

    // Get pallete (16 entries)
    ExternalMemoryCallback(image, sizeof(BITMAP_HEADER), 16 * sizeof(WORD), pallete);

    // Set offset to the image data
    memOffset = sizeof(BITMAP_HEADER) + 16 * sizeof(WORD);

    // Line width in bytes
    byteWidth = bmp.width >> 1;
    if(bmp.width & 0x0001)
        byteWidth++;

    // Get size
    sizeX = bmp.width;
    sizeY = bmp.height;

    for(y = 0; y < sizeY; y++)
    {

        // Get line
        ExternalMemoryCallback(image, memOffset, byteWidth, lineBuffer);
        memOffset += byteWidth;
        DisplayEnable();
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            pData = lineBuffer;
            SetAddress(left, top);

            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {

                // Read 2 pixels from flash
                if(x & 0x0001)
                {

                    // second pixel in byte
                    SetColor(pallete[temp >> 4]);
                }
                else
                {
                    temp = *pData++;

                    // first pixel in byte
                    SetColor(pallete[temp & 0x0f]);
                }

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation, top);
                    }
                    else
#endif
                    {
                        WritePixel(_color);
                        currentXLocation++;
                    }
                }
            }

            top++;
        }

        DisplayDisable();
    }
}

/*********************************************************************
* Function: void PutImage8BPPExt(SHORT left, SHORT top, void* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs monochrome image starting from left,top coordinates
*
* Note: image must be located in external memory
*
********************************************************************/
void PutImage8BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register DWORD  memOffset;
    BITMAP_HEADER   bmp;
    WORD            pallete[256];
    BYTE            lineBuffer[(GetMaxX() + 1)];
    BYTE            *pData;

    BYTE            temp;
    WORD            sizeX, sizeY;
    WORD            x, y, currentXLocation;
    BYTE            stretchX, stretchY;

    // Get image header
    ExternalMemoryCallback(image, 0, sizeof(BITMAP_HEADER), &bmp);

    // Get pallete (256 entries)
    ExternalMemoryCallback(image, sizeof(BITMAP_HEADER), 256 * sizeof(WORD), pallete);

    // Set offset to the image data
    memOffset = sizeof(BITMAP_HEADER) + 256 * sizeof(WORD);

    // Get size
    sizeX = bmp.width;
    sizeY = bmp.height;

    for(y = 0; y < sizeY; y++)
    {

        // Get line
        ExternalMemoryCallback(image, memOffset, sizeX, lineBuffer);
        memOffset += sizeX;
        DisplayEnable();
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            pData = lineBuffer;
            SetAddress(left, top);

            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {
                temp = *pData++;
                SetColor(pallete[temp]);

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation, top);
                    }
                    else
#endif
                    {
                        WritePixel(_color);
                        currentXLocation++;
                    }
                }
            }

            top++;
        }

        DisplayDisable();
    }
}

/*********************************************************************
* Function: void PutImage16BPPExt(SHORT left, SHORT top, void* image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
*
* PreCondition: none
*
* Input: left,top - left top image corner,
*        image - image pointer,
*        stretch - image stretch factor
*        pPartialImageData - (currently not implemented in this driver)
*
* Output: none
*
* Side Effects: none
*
* Overview: outputs monochrome image starting from left,top coordinates
*
* Note: image must be located in external memory
*
********************************************************************/
void PutImage16BPPExt(SHORT left, SHORT top, void *image, BYTE stretch, PUTIMAGE_PARAM *pPartialImageData)
{
    register DWORD  memOffset;
    BITMAP_HEADER   bmp;
    WORD            lineBuffer[(GetMaxX() + 1)];
    WORD            *pData;
    WORD            byteWidth;

    WORD            temp;
    WORD            sizeX, sizeY;
    WORD            x, y, currentXLocation;
    BYTE            stretchX, stretchY;

    // Get image header
    ExternalMemoryCallback(image, 0, sizeof(BITMAP_HEADER), &bmp);

    // Set offset to the image data
    memOffset = sizeof(BITMAP_HEADER);

    // Get size
    sizeX = bmp.width;
    sizeY = bmp.height;

    byteWidth = sizeX << 1;

    for(y = 0; y < sizeY; y++)
    {

        // Get line
        ExternalMemoryCallback(image, memOffset, byteWidth, lineBuffer);
        memOffset += byteWidth;
        DisplayEnable();
        for(stretchY = 0; stretchY < stretch; stretchY++)
        {
            pData = lineBuffer;
            SetAddress(left, top);

            for(x = 0, currentXLocation = 0; x < sizeX; x++)
            {
                temp = *pData++;
                SetColor(temp);

                // Write pixel to screen
                for(stretchX = 0; stretchX < stretch; stretchX++)
                {
#ifdef USE_TRANSPARENT_COLOR
                    if (((GetTransparentColor() == GetColor()) && (GetTransparentColorStatus() == TRANSPARENT_COLOR_ENABLE)))
                    {
                        currentXLocation++;
                        SetAddress(left + currentXLocation, top);
                    }
                    else
#endif
                    {
                        WritePixel(_color);
                        currentXLocation++;
                    }
                }
            }

            top++;
        }

        DisplayDisable();
    }
}

    #endif //USE_BITMAP_EXTERNAL
#endif //#ifndef USE_PRIMITIVE_PUTIMAGE

#endif //GFX_USE_DISPLAY_CONTROLLER_ILI9341
