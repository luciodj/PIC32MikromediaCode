
/*****************************************************************************
* Microchip Graphics Library
* Graphics Display Designer (GDD) Template
*****************************************************************************
 
* Dependencies:    See INCLUDES section below
* Processor:       PIC24F, PIC24H, dsPIC, PIC32
* Compiler:        MPLAB C30 V3.22, MPLAB C32 V1.05b
* Linker:          MPLAB LINK30, MPLAB LINK32
* Company:         Microchip Technology Incorporated
*
* Software License Agreement
*
* Copyright (c) 2010 Microchip Technology Inc.  All rights reserved.
* Microchip licenses to you the right to use, modify, copy and distribute
* Software only when embedded on a Microchip microcontroller or digital
* signal controller, which is integrated into your product or third party
* product (pursuant to the sublicense terms in the accompanying license
* agreement).  
*
* You should refer to the license agreement accompanying this Software
* for additional information regarding your rights and obligations.
*
* SOFTWARE AND DOCUMENTATION ARE PROVIDED AS IS WITHOUT WARRANTY OF ANY
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
* Author               Date        Comment
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
*****************************************************************************/


/***************************************************
*INCLUDE FILES
***************************************************/
#include "Graphics/Graphics.h"
#include "GDD_Screens.h"

/***************************************************
* String literals used in the project
***************************************************/
const XCHAR SliderWindow_WIN_1text[ ] = "Backlight Slider";



/***************************************************
* Scheme Declarations
***************************************************/
GOL_SCHEME* defscheme;
GOL_SCHEME* enter_new_scheme;
GOL_SCHEME* Light;
GOL_SCHEME* Window;


/***************************************************
* Function and global Declarations
***************************************************/
void (*CreateFunctionArray[NUM_GDD_SCREENS])();
void (*CreatePrimitivesFunctionArray[NUM_GDD_SCREENS])();
WORD currentGDDDemoScreenIndex;
BYTE update = 0;
static BYTE updateGPL = 0;

/***************************************************
* Function       : GDDDemoCreateFirstScreen
* Parameters     : none
* Return         : none
* Description    : Creates the first screen
***************************************************/
void GDDDemoCreateFirstScreen(void)
{
    currentGDDDemoScreenIndex = 0;
    update = 1;
    (*CreateFunctionArray[currentGDDDemoScreenIndex])();
}

/***************************************************
* Function      : GDDDemoNextScreen
* Parameters    : none
* Return        : none
* Description   : Updates counter to show next screen
***************************************************/
void GDDDemoNextScreen(void)
{
    currentGDDDemoScreenIndex++;
    if(currentGDDDemoScreenIndex >= NUM_GDD_SCREENS)
    {
        currentGDDDemoScreenIndex = 0;
    }
    update = 1;
}

/***************************************************
* Function      : GDDDemoGoToScreen
* Parameters    : int screenIndex
* Return        : none
* Description   : Show the screen referred by the index
***************************************************/
void GDDDemoGoToScreen(int screenIndex)
{
    currentGDDDemoScreenIndex = screenIndex;
    if(currentGDDDemoScreenIndex >= NUM_GDD_SCREENS)
    {
        currentGDDDemoScreenIndex = 0;
    }
    update = 1;
}

/***************************************************
* Function       : GDDDemoGOLDrawCallback
* Parameters     : none
* Return         : none
* Description    : Callback to do the actual drawing of widgets
***************************************************/
void GDDDemoGOLDrawCallback(void)
{
    if(updateGPL)
    {
        (*CreatePrimitivesFunctionArray[currentGDDDemoScreenIndex])();
        updateGPL = 0;
    }

    if(update)
    {
        (*CreateFunctionArray[currentGDDDemoScreenIndex])();
        if(CreatePrimitivesFunctionArray[currentGDDDemoScreenIndex] != NULL)
        {
            updateGPL = 1;
        }
        update = 0;
    }
}

/***************************************************
* Function       : CreateError
* Parameters     : none
* Return         : none
* Description    : Creates a Error screen 
***************************************************/
void CreateError(char* string)
{
    // Blue Screen Error
    SetColor(119);
    ClearDevice();
    SetColor(-1);

    // Flash Error Message
    if(string == NULL)
        {OutTextXY(0, 0, "Runtime Error.");}
    else
        {OutTextXY(0,0, string);}
}

/***************************************************
* Function 	      :    CreateSliderWindow
* Parameters      :    none
* Return          :    none
* Description     :    Creates GOL widgets used in screen - SliderWindow
***************************************************/
void CreateSliderWindow(void)
{
    GOLFree();
    SetColor(RGBConvert(248, 252, 248));
    ClearDevice();


     if(Window != NULL) free(Window);
        Window = GOLCreateScheme();

    Window->Color0 = RGBConvert(96, 100, 96);
    Window->Color1 = RGBConvert(16, 132, 168);
    Window->TextColor0 = RGBConvert(248, 252, 248);
    Window->TextColor1 = RGBConvert(248, 252, 248);
    Window->EmbossDkColor = RGBConvert(96, 100, 96);
    Window->EmbossLtColor = RGBConvert(200, 204, 200);
    Window->TextColorDisabled = RGBConvert(128, 128, 128);
    Window->ColorDisabled = RGBConvert(208, 224, 240);
    Window->CommonBkColor = RGBConvert(200, 204, 200);
    Window->pFont = (void*)&Gentium_16;

    if(Light != NULL) free(Light);
        Light = GOLCreateScheme();

    Light->Color0 = RGBConvert(152, 152, 152);
    Light->Color1 = RGBConvert(16, 132, 168);
    Light->TextColor0 = RGBConvert(0, 0, 0);
    Light->TextColor1 = RGBConvert(248, 252, 248);
    Light->EmbossDkColor = RGBConvert(96, 100, 96);
    Light->EmbossLtColor = RGBConvert(200, 204, 200);
    Light->TextColorDisabled = RGBConvert(248, 252, 248);
    Light->ColorDisabled = RGBConvert(208, 224, 240);
    Light->CommonBkColor = RGBConvert(200, 204, 200);
    Light->pFont = (void*)&LucidaSansUnicode_28;


    WINDOW *pWIN_1;
    pWIN_1 = WndCreate(  WIN_1, //name
                       0, //left
                       0, //top
                       319, //right
                       239, //bottom
                       WND_DRAW, //state
                       NULL, //bitmap
                       (XCHAR*)SliderWindow_WIN_1text, //text
                      Window //scheme
                    );

    if(pWIN_1==NULL)
    {
      CreateError(0);
      while(1); //Fatal Error, Check for memory leak or heap size
    }

    SLIDER *pSLD_2;
    pSLD_2 = SldCreate(  SLD_2, //name
                       274, //left
                       45, //top
                       305, //right
                       231, //bottom
                       SLD_DRAW | SLD_DRAW_THUMB | SLD_VERTICAL, //state
                       255, //range
                       25, //pagesize
                       255, //pos
                      Light //scheme
                    );

    if(pSLD_2==NULL)
    {
      CreateError(0);
      while(1); //Fatal Error, Check for memory leak or heap size
    }

    DIGITALMETER *pDMT_3;
    pDMT_3 = DmCreate(  DMT_3, //name
                       99, //left
                       99, //top
                       219, //right
                       151, //bottom
                       DM_DRAW | DM_CENTER_ALIGN, //state
                       255, //value
                       3, //noofdigits
                       0, //dotpos
                      Light //scheme
                    );

    if(pDMT_3==NULL)
    {
      CreateError(0);
      while(1); //Fatal Error, Check for memory leak or heap size
    }


}

/***************************************************
* Function       : CreateFunctionArray
* Parameters     : none
* Return         : none
* Description    : Creates a array of GOL function pointers
***************************************************/
void (*CreateFunctionArray[NUM_GDD_SCREENS])(void)=
    
{
    &CreateSliderWindow,
};



/***************************************************
* Function       : CreatePrimitivesFunctionArray
* Parameters     : none
* Return         : none
* Description    : Creates a array of GPL function pointers
***************************************************/
void (*CreatePrimitivesFunctionArray[NUM_GDD_SCREENS])(void)=
    
{
    NULL,
};


