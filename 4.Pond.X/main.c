/*
 * Project: Pond
 *
 * Simple animation using graphics primitives and touchscreen input
 */
#include <xc.h>
#include "PICconfig.h"
#include "uMedia.h"
#include "LCDTerminal.h"
#include "TimeDelay.h"

#define RADIUS      20
#define SPEED       20
#define MAX_LIST    20

typedef struct {            // drop coordinates and radius
    unsigned x;
    unsigned y;
    unsigned r;
} drop_t;

drop_t drop[ MAX_LIST];     // list containing each drop

int main( void)
{
    drop_t *p, *t;
    unsigned list_len = 0;
    unsigned temp_len = 0;
    int i;

    // initializations
    uMBInit();
    LCDSetColor( LIGHTBLUE);
    LCDSetBackground( BLACK);
    LCDInit();
    TouchInit( NVMWrite, NVMRead, NVMSectorErase, NULL);
    TickInit( 1);
    DisplayBacklightOn();

    // splash screen
    LCDCenterString( -1, "The Pond");
    LCDCenterString( +1, "Ready...");
    while( TouchGetX() == -1);      // wait for touch
    while( TouchGetX() != -1);      // release

    LCDClear();

    // main loop
    while(1)
    {
        DelayMs( 100);

        // check if a new drop has arrived
        if ( TouchGetX() != -1)
            if ( list_len < MAX_LIST)
            {
                // list_append
                drop[list_len].x = TouchGetX();
                drop[list_len].y = TouchGetY();
                drop[list_len].r = RADIUS;
                list_len++;
            }

        // update and draw each drop in the list
        temp_len = 0;
        p = &drop[0];
        t = &drop[0];
        for( i=0; i<list_len; i++)
        {
            // erase previous position
            SetColor( BLACK);
            Circle( p->x, p->y, p->r);
            
            // enlarge circle
            p->r += SPEED;

            // if a circle is technically still visible
            if ( p->r < 256)
            {
                if ( t != p)    // move the drop down the list
                {
                    t->x = p->x;
                    t->y = p->y;
                    t->r = p->r;
                }
                // draw growing circles with decreasing intensity
                SetColor( RGB565CONVERT( 0, 0, 256 - t->r ));
                Circle( t->x, t->y, t->r);
                // grow the temp list
                t++;
                temp_len++;
            }
            p++;
        }

        // update list length
        list_len = temp_len;
    } // main loop

    return 0;
} // main