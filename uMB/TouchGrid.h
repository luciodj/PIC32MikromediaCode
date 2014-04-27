/*
 * File:   TouchGrid.h
 *
 *
 * Requires: MAL 1306
 */

#ifndef  _TOUCH_GRID
#define _TOUCH_GRID

#include <xc.h>
#include <HardwareProfile.h>
#include <TimeDelay.h>
#include <TouchScreen.h>

/**
 */
typedef struct
{
    unsigned      x: 4;     // x coordinate on the touch grid
    unsigned      y: 4;     // y coordinate on the touch grid
    unsigned  valid: 1;     // flag, indicates a valid touch event detected
    unsigned option: 1;     // flag, can be use to capture long touch events
} t_code;


/**
 * @brief   Initializes the Resistive touch interface (uses Timer3) and defines
 *              a grid to simplify touch input
 *
 * @param x  dimension of the horizontal grid (example: GetMaxX()/4)
 * @param y  dimension of the vertical grid (example: GetMaxY()/4)
 */
void TouchGridInit( int x, int y);


/**
 * @brief   Fetches current touch state machine output and packs it in t_code 
 *              structure 
 *
 * @return  t_code containing current status
 */
t_code TouchGet( void);


/**
 * @brief   Blocking wait for a touch and release event. Debounces and detects
 *              event duration (setting the option flag)
 * @return
 */
t_code TouchGrid( void);


#endif
