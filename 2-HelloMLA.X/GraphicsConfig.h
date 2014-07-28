/*********************************************************************
 * Configuration Module for Microchip Graphics Library
 * This file contains compile time options for the Graphics Library. 
 ********************************************************************/
#ifndef _GRAPHICSCONFIG_H
#define _GRAPHICSCONFIG_H

#define COLOR_DEPTH    16

//#define USE_PRIMITIVE_PUTIMAGE

/*********************************************************************
* Overview: Blocking and Non-Blocking configuration selection. To
*   enable non-blocking configuration USE_NONBLOCKING_CONFIG must be
*   defined. If this is not defined, blocking configuration is assumed.
********************************************************************/
//#define USE_NONBLOCKING_CONFIG // Comment this line to use blocking configuration

/*********************************************************************
* Overview: Keyboard control on some objects can be used by enabling
*   the GOL Focus (USE_FOCUS)support.
*********************************************************************/
//#define USE_FOCUS

/********************************************************************/
//#define USE_TOUCHSCREEN           // Enable touch screen support.
//#define USE_KEYBOARD              // Enable key board support.

/*********************************************************************
* Overview: To save program memory, unused Widgets or Objects can be 
*   removed at compile time.
*********************************************************************/
#define USE_GOL                     // Enable Graphics Object Layer.
//#define USE_BUTTON                // Enable Button Object.
//#define USE_WINDOW                // Enable Window Object.
//#define USE_CHECKBOX              // Enable Checkbox Object.
//#define USE_RADIOBUTTON           // Enable Radio Button Object.
//#define USE_EDITBOX               // Enable Edit Box Object.
//#define USE_LISTBOX               // Enable List Box Object.
//#define USE_SLIDER                // Enable Slider or Scroll Bar Object.
//#define USE_PROGRESSBAR           // Enable Progress Bar Object.
//#define USE_STATICTEXT            // Enable Static Text Object.
//#define USE_PICTURE               // Enable Picture Object.
//#define USE_GROUPBOX              // Enable Group Box Object.
//#define USE_ROUNDDIAL             // Enable Dial Object.
//#define USE_METER                 // Enable Meter Object.
//#define USE_CUSTOM                // Enable Custom Control Object
                                    //(an example to create customized Object).

/*********************************************************************
 * Overview: To enable support for unicode fonts, USE_MULTIBYTECHAR
 *    must be defined. This changes XCHAR definition. See XCHAR for details.
 *********************************************************************/
//#define USE_MULTIBYTECHAR

/*********************************************************************/
#define USE_FONT_FLASH          // Support for fonts located in internal flash
//#define USE_FONT_EXTERNAL     // Support for fonts located in external memory

/*********************************************************************/
#define USE_BITMAP_FLASH        // Support for bitmaps located in internal flash
//#define USE_BITMAP_EXTERNAL   // Support for bitmaps located in external memory


#endif // _GRAPHICSCONFIG_H
