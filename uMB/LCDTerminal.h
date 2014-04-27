/******************************************************************************
 *
 *   Terminal Emulation on MikroE Mikromedia LCD display
 *
 *   API compatible with Explorer16 2x16 LCD interface 
 *******************************************************************************/

#include "LCDConfig.h"
#include "HardwareProfile.h"
#include "GraphicsConfig.h"

#include "Graphics/Graphics.h"


void LCDInit(void);
void LCDHome(void);
void LCDL2Home(void);
void LCDClear(void);
void LCDPut( char);
void LCDPutChar( char);
void LCDPutString( char *);
void LCDCenterString( int, char *);
void LCDShiftCursorLeft(void);
void LCDShiftCursorRight(void);
void LCDShiftCursorUp(void);
void LCDShiftCursorDown(void);
void LCDLineHome(void);
void LCDClearToEOL( void);
void LCDSetXY( int, int);
void LCDSetColor( int x);
void LCDSetBackground( int x);   
int LCDGetColor( void);
int LCDGetBackground( void);

// font size is based on default font 
#define FONT_W  12
#define FONT_H  20

#define _MAX_X  (GetMaxX()+1)/FONT_W
#define _MAX_Y  (GetMaxY()+1)/FONT_H

#define AT( x, y)   LCDSetXY( x, y)
#define LCDL1Home   LCDHome

