/*
 * File:   Alarm.c
 *
 * Author: Lucio Di Jasio
 *
 * Requires: MLA 1306
 */

#include "PICconfig.h"
#include "HardwareProfile.h"

#include <MDD File System/FSIO.h>
#include <M25P80.h>
#include <TouchScreen.h>
#include <TouchGrid.h>
#include <uMedia.h>
#include <vs1053.h>
#include <stdio.h>          // sprintf

#include "solari.h"
#include "bitmaps.h"        // icons


// display pages/modes
#define CLOCK_FACE_MODE 00
#define CLOCK_SET_MODE  01
#define ALARM_SET_MODE  02
#define DATE_SET_MODE   03

#define SNOOZE_TIME     8   // minutes

int Snooze = 0;             // snooze counter
BOOL fNight = FALSE;        // dimming for night mode
FSFILE *fp;                 // pointer to alarm.mp3


void BackgroundPlay( void)
{
    static size_t length = 0;
    static BYTE buffer[512], *p;
    int i;

    while( 1)
    {
        // ensure buffer is loaded
        if ( length == 0)            // if buffer empty
        {
            MP3_DCS_Disable();
            length = FSfread( buffer, 1, sizeof( buffer), fp);
            p = buffer;

            if ( length == 0)       // nothing else to read (EOF)
            { // flush and rewind for next use
                flushMP3();
                FSrewind( fp);
                return;
            }
        }

        // check if MP3 needs feeding
        if ( MP3_DREQ)
        {
            // feed the hungry codec
            MP3_DCS_Enable();
            for( i=0; i<32; i++)
            {
                if (length==0)
                    break;
                writeMP3( *p++);
                length--;
            }
            MP3_DCS_Disable();
        }
        else
            return;
    }
} // background playback of MP3 files


void SoundCallback(void)
{
   if ( sAlarm == A_RING)       // if the alarm is blaring
   {
       if ( fp != NULL)         // if an mp3 file is available
           BackgroundPlay();
   }
}


void initApp( void)
{
    char *s;

    // init board and I/Os
    uMBInit();

    // init touch screen timed interrupt and NVM backed calibration
    TouchGridInit( GetMaxX()/2, GetMaxY()/3);
    
    // init display
    SolariInit();
    
    // init audio interface
    MP3Init( 0);                // enable audio codec (normal mode)
    setMP3Volume( 30, 30);      // set volume (low)
    
    // init File System and prepare a pointer to alarm.mp3
    if ( FSInit())
    {   // SD card found
        fp = FSfopen( "alarm.mp3", "r");    // search for the alarm file
    }

    // display splash screen
    CenterString( 2, "MLA Alarm Clock");
    CenterString( 0, __DATE__);
    if ( fp != NULL)
        s = "Alarm File Found!";
    else
        s = "Alarm File Not Available";
    CenterString( -2, s);

    TouchGrid();                // wait for screen to be touched

    // init alarm
    Alarm.hour = 0x06;
    Alarm.min  = 0x30;
} // initApp


void clockSetTask( void)
{
    rtccTime time;
    t_code  tc;

    // initialize the time display
    initTimeSettingPage();
    time = (rtccTime)RtccGetTime();
    setSolari( &time);

    // set grid of 2*3
    setGrid( GetMaxX()/2, GetMaxY()/3);

    while(1)
    {
        tc = TouchGrid();
        if (tc.y == 0)                      // top arrows
        {
            if ( tc.x == 0)
                incBCD( &time.hour, 1, 0, 23);  // inc hours
            else
                incBCD( &time.min,  1, 0, 59);  // inc minutes

            setSolari( &time);
        }

        else if (tc.y == 2)                 // bottom arrows
        {
            if ( tc.x == 0)
                decBCD( &time.hour, 1, 0, 23);  // dec hours
            else
                decBCD( &time.min,  1, 0, 59);  // dec minutes

            setSolari( &time);
        }

        else                                // pressing the center bar
        {
            if ( tc.option)                 // must press long to update
                RtccSetTime( time.l);
            return;
        }
    } // while
} // clockSet Task


void alarmSetTask( void)
{
    rtccTime time;
    t_code  tc;

    // initialize the time display
    initAlarmSettingPage();
    time.l = Alarm.l;
    setSolari( &time);

    // set grid of 2*3
    setGrid( GetMaxX()/2, GetMaxY()/3);

    while(1)
    {
        tc = TouchGrid();
        if (tc.y == 0)                      // top arrows
        {
            if ( tc.x == 0)
                incBCD( &time.hour, 1, 0, 23);  // inc hours
            else
                incBCD( &time.min,  10, 0, 50);  // inc minutes

            setSolari( &time);
        }

        else if (tc.y == 2)                 // bottom arrows
        {
            if ( tc.x == 0)
                decBCD( &time.hour, 1, 0, 23);  // dec hours
            else
                decBCD( &time.min,  10, 0, 50);  // dec minutes

            setSolari( &time);
        }

        else if ( tc.y == 1)                // pressing the center bar
        {
            if ( tc.option)                 // must press long to update
            {
                Alarm.l = time.l;           // save the new alarm
                sAlarm = A_ON;              // turn on the alarm by default
            }
            return;
        }
    } // while
} // alarmSet Task


void dateSetTask( void)
{
    rtccDate date;
    t_code  tc;
    int y = GetMaxY()/2;

    // initialize the date setting page
    initDateSettingPage();
    date = (rtccDate)RtccGetDate();
    displayDate( &date, y);

    // set grid of 4*3
    setGrid( GetMaxX()/4, GetMaxY()/3);

    while(1)
    {
        tc = TouchGrid();
        if (tc.y == 0)                      // top arrows
        {
            switch (tc.x)
            {
                case 0: incBCD( &date.wday, 1, 0,  6); break;
                case 1: incBCD( &date.mday, 1, 1, 31); break;
                case 2: incBCD( &date.mon,  1, 1, 12); break;
                case 3: incBCD( &date.year, 1, 0, 50); break;
            }
            displayDate( &date, y);
        }

        else if (tc.y == 2)                 // bottom arrows
        {
            switch (tc.x)
            {
                case 0: decBCD( &date.wday, 1, 0,  6); break;
                case 1: decBCD( &date.mday, 1, 1, 31); break;
                case 2: decBCD( &date.mon,  1, 1, 12); break;
                case 3: decBCD( &date.year, 1, 0, 50); break;
            }
            displayDate( &date, y);
        }

        else if ( tc.y == 1)                // center bar
        {
            if ( tc.option)                 // long press to update
                RtccSetDate( date.l);
            return;
        }
    } // while
} // dateSet Task


int clockFaceTask( void)
{
    rtccDate Date, nDate;
    rtccTime Time, nTime;

    // initialize the time display
    SetColor( Background);
    ClearDevice();

    // intialize the date display
    Date.l = RtccGetDate();
    displayDateTop( &Date);
    displayAlarm( sAlarm);
    displayMoon();

    // initialize the time display
    Time.l = RtccGetTime();
    setSolari( &Time);
    displaySeconds( &Time);

    // set grid of 2*3
    setGrid( GetMaxX()/4, GetMaxY()/3);

    // main loop
    while( 1 )
    {
        t_code code = TouchGet();
        if (code.valid)
        {
            code = TouchGrid();

            // 1. check if alarm is on (all screen works as a button
            if ( sAlarm == A_RING)
            {
                sAlarm = A_SNOOZE;
                displayAlarm( sAlarm);      // update icon
                if (fNight)                 // if night mode was on
                    SetBacklight( 4);
            }

            // 2. normal operation, settings (screen partitioned +long/short
            else if (code.option)           // long press set->time or date
            {
                if ( code.y > 0)
                    return CLOCK_SET_MODE;
                else                        // set date
                    return DATE_SET_MODE;
            }

            // 3. other alarm settings
            else                            // short press
            {
                if ( code.y > 0)
                    return ALARM_SET_MODE;  // set the alarm time
                else
                {                           // toggle/change alarm state
                    if ( code.x == 0)
                    {
                        switch( sAlarm)     // toggle the Alarm
                        {
                            case A_ON:      sAlarm = A_OFF; break;
                            case A_OFF:     sAlarm = A_ON; break;
                            case A_RING:    sAlarm = A_SNOOZE; break;
                            case A_SNOOZE:  sAlarm = A_ACK; break;
                            default:
                            case A_ACK:     break;  // will change automatically
                        }
                        displayAlarm( sAlarm);
                    }

                    else if ( code.x == 3)
                    {
                        // toogle the night mode
                        if ( fNight)
                        {
                            fNight = FALSE;
                            SetBacklight( 100);
                        }
                        else
                        {
                            fNight = TRUE;
                            SetBacklight( 4);
                        }
                    }
                }
            }
        }

        // update hours/minutes
        nTime.l = RtccGetTime();
        rollSolari(&nTime);

        // update date
        nDate.l = RtccGetDate();
        if ( nDate.l != Date.l)
        {
            // if date changed, update
            Date.l = RtccGetDate();
            displayDateTop( &Date);
        }

        // update seconds
        if ( Time.sec != nTime.sec)
        {
            Time.l = RtccGetTime();
            displaySeconds( &Time);

            // during the ring phase, flash the bell icon
            if ( sAlarm == A_RING)
            {
                if ( Time.sec & 1)
                    displayAlarm( A_ON);
                else
                    displayAlarm( A_OFF);
            }
        }

        // update alarm status
        switch( sAlarm)
        {
            case A_ON:          // check for time match
                if ( Time.hour == Alarm.hour)
                    if ( Time.min == Alarm.min)
                    {
                        FSrewind( fp);
                        sAlarm = A_RING;        // trigger the alarm
                        Snooze = SNOOZE_TIME;   // init the snooze timer
                        SetBacklight( 100);    // turn backlight to full bright
                    }
                break;
            case A_SNOOZE:      // check for time match + snooze factor
                if ( Time.hour == Alarm.hour)
                    if ( toDec(Time.min) == (toDec(Alarm.min)+ Snooze)%60)
                    {
                        FSrewind( fp);
                        sAlarm = A_RING;
                        Snooze += SNOOZE_TIME;
                        SetBacklight( 100);    // turn backlight to full bright
                    }
                break;
            case A_ACK:         // check when time!=alarm to avoid retrigger
                if ( Time.min != Alarm.min)
                {
                    sAlarm = A_ON;     // return to A_ON                
                }
                break;
            default:
                break;
        } // switch alarm
    } // main loop
} // clockPageTask


int main( void )
{
    int mode = CLOCK_FACE_MODE;

    // global initialization
    initApp();
    InitRTCC( __DATE__);

    while( 1)           // main loop
    {
        switch(mode) {

            case CLOCK_SET_MODE:
                clockSetTask();
                mode = CLOCK_FACE_MODE;
                break;

            case ALARM_SET_MODE:
                alarmSetTask();
                mode = CLOCK_FACE_MODE;
                break;

            case DATE_SET_MODE:
                dateSetTask();
                mode = CLOCK_FACE_MODE;
                break;

            case CLOCK_FACE_MODE:
            default:
                mode = clockFaceTask();
                break;
        }

    } // main loop

} // main
