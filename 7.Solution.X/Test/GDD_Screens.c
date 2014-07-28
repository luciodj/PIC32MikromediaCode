
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
const XCHAR QVGA_WIN_8text[ ] = "Accelerometer Test";
const XCHAR QVGA_MTR_Ztext[ ] = "Z";



/***************************************************
* Scheme Declarations
***************************************************/
GOL_SCHEME* defscheme;
GOL_SCHEME* Meter;


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
* Function 	      :    CreateQVGA
* Parameters      :    none
* Return          :    none
* Description     :    Creates GOL widgets used in screen - QVGA
***************************************************/
void CreateQVGA(void)
{
    GOLFree();
    SetColor(RGBConvert(248, 252, 248));
    ClearDevice();


     if(Meter != NULL) free(Meter);
        Meter = GOLCreateScheme();

    Meter->Color0 = RGBConvert(0, 0, 152);
    Meter->Color1 = RGBConvert(200, 252, 248);
    Meter->TextColor0 = RGBConvert(200, 204, 200);
    Meter->TextColor1 = RGBConvert(200, 204, 200);
    Meter->EmbossDkColor = RGBConvert(0, 0, 96);
    Meter->EmbossLtColor = RGBConvert(48, 48, 248);
    Meter->TextColorDisabled = RGBConvert(128, 128, 128);
    Meter->ColorDisabled = RGBConvert(208, 224, 240);
    Meter->CommonBkColor = RGBConvert(0, 152, 200);
    Meter->pFont = (void*)&Gentium_16;


    WINDOW *pWIN_8;
    pWIN_8 = WndCreate(  WIN_8, //name
                       0, //left
                       0, //top
                       319, //right
                       239, //bottom
                       WND_DRAW, //state
                       NULL, //bitmap
                       (XCHAR*)QVGA_WIN_8text, //text
                      Meter //scheme
                    );

    if(pWIN_8==NULL)
    {
      CreateError(0);
      while(1); //Fatal Error, Check for memory leak or heap size
    }

    METER *pMTR_Z;
    pMTR_Z = MtrCreate(  MTR_Z, //name
                       52, //left
                       44, //top
                       235, //right
                       195, //bottom
                       MTR_DRAW, //state
                       1, //pos
                       0, //minval
                       255, //maxval
                       (void*)&Gentium_16, //titlefont
                       (void*)&Gentium_16, //valuefont
                       (XCHAR*)QVGA_MTR_Ztext, //text
                      Meter //scheme
                    );

    if(pMTR_Z==NULL)
    {
      CreateError(0);
      while(1); //Fatal Error, Check for memory leak or heap size
    }

    PROGRESSBAR *pPRB_X;
    pPRB_X = PbCreate(  PRB_X, //name
                       52, //left
                       199, //top
                       236, //right
                       229, //bottom
                       PB_DRAW | PB_DRAW_BAR, //state
                       50, //pos
                       100, //range
                      Meter //scheme
                    );

    if(pPRB_X==NULL)
    {
      CreateError(0);
      while(1); //Fatal Error, Check for memory leak or heap size
    }

    PROGRESSBAR *pPRB_Y;
    pPRB_Y = PbCreate(  PRB_Y, //name
                       246, //left
                       44, //top
                       282, //right
                       196, //bottom
                       PB_DRAW | PB_DRAW_BAR | PB_VERTICAL, //state
                       50, //pos
                       100, //range
                      Meter //scheme
                    );

    if(pPRB_Y==NULL)
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
    &CreateQVGA,
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


