/*
 * File:   TouchGrid.h
 *
 * Requires: MAL 1306
 */
#ifndef  _TOUCH_GRID
#define _TOUCH_GRID

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
    unsigned option: 1;     // flag, can be used to capture long touch events
} code_t;


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
code_t TouchGet( void);


/**
 * @brief   Blocking wait for a touch and release event. Debounces and detects
 *              event duration (setting the option flag)
 * @return
 */
code_t TouchGrid( void);


/**
 * @brief   set the horizontal and vertical dimensions of the touch grid
 *
 */
void setGrid( int x, int y);

#endif
