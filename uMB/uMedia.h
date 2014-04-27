/*
** uMedia.h
** 
**  Mikromedia configuration and basic peripherals access
**
*/

#ifndef _MIKROE_uMB
#define _MIKROE_uMB

//#define _SCREENCAPTURE
#define _SFLASH
#define _TOUCH
#define _BACKLIGHT

#include "HardwareProfile.h"            // need to know clock freq.

#include "drv_spi.h"

// function prototypes and macros
void uMBInit( void);            // init standard hw configuration
void TickInit( unsigned);       // init Timer3 as the main app tick

void SetBacklight( unsigned char);   // set Backlight sw PWM duty cycle

void ScreenCapture( char *filename); // used to capture screenshots 

#endif // _MIKROE_uMB

