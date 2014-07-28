/*
** uMedia.h
** 
**  Mikromedia configuration and basic peripherals access
**
*/

#ifndef _MIKROE_uMB
#define _MIKROE_uMB

#include "uMBConfig.h"
#include "HardwareProfile.h"            // need to know clock freq.
#include "drv_spi.h"
#include "Touchscreen.h"
#include "m25p80.h"
#include "Graphics/Graphics.h"
#include "MDD File System/FSIO.h"

// function prototypes and macros
void uMBInit( void);            // init standard hw configuration
void TickInit( unsigned);       // init Timer3 as the main app tick

void SetBacklight( unsigned char);   // set Backlight sw PWM duty cycle

void SoundCallback( void);      // callback function for audio background play

void ScreenCapture( char *filename); // used to capture screenshots 

#endif // _MIKROE_uMB

