/*
 * Solari styled animated 4 digit display
 *
 * Author: Lucio Di Jasio
 */
#include <stdint.h>         // uintX_t
#include <stdio.h>

#include "bitmaps.h"
#include "solari.h"

// time/alarm display positioning parameters
#define DIGIT_W         64      // tile width
#define DIGIT_H2        48      // half a tile (bmp)
#define DIGIT_H4        24      // quarter of a tile (bmp/2)
#define LEFT_MARGIN     25      // x pos for leftmost digit
#define SPACING          2      // spacing between digits
#define TOP_MARGIN      90      // y pos of digits

// individual digits positioning paramters
#define DIGIT0_X        (LEFT_MARGIN)
#define DIGIT1_X        (LEFT_MARGIN + DIGIT_W + SPACING)
#define DIGIT2_X        (LEFT_MARGIN + 2*DIGIT_W + 8*SPACING)
#define DIGIT3_X        (LEFT_MARGIN + 3*DIGIT_W + 9*SPACING)

// arrows shaping and positioning parameters
#define ARROW_H         20      // arrow height
#define ARROW_TOP       ( TOP_MARGIN - 20)
#define ARROW_BOT       ( TOP_MARGIN + 2*DIGIT_H2 + 20)

// date top position
#define DATEY           20      // date display top positioning


// seconds display positioning parameters
#define SEC_LEFT        (LEFT_MARGIN + 2*DIGIT_W+ 3*SPACING)
#define SEC_POS         (TOP_MARGIN + DIGIT_H2)
#define SEC_GAP         (5*SPACING)
#define SEC_SIZE        (2*SPACING)

// progress bar positioning parameters
#define PBAR_L          ((GetMaxX()-120)>>1)
#define PBAR_T          ( GetMaxY() -30)
#define PBAR_H          4

#define Background      BLACK
#define Foreground      WHITE


char *sWeekDay[] = { "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
char *sMonth[] = {  "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                    "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

// two halves of each bitmap/digit
const void *pa[] = { &_0a, &_1a, &_2a, &_3a, &_4a, &_5a, &_6a, &_7a, &_8a, &_9a};
const void *pb[] = { &_0b, &_1b, &_2b, &_3b, &_4b, &_5b, &_6b, &_7b, &_8b, &_9b};

typedef struct {
    uint8_t value;          // current digit value
    uint8_t state;          // animation state 0-3
    uint8_t mod;            // modulus 2 or 10
    unsigned posx;          // x, y position on screen
    unsigned posy;
} digit_t;

// calculate digit position
digit_t dgt[4] = {
    { 0, 0, 3,  DIGIT0_X, TOP_MARGIN}, // dec hours 0..2
    { 0, 0, 10, DIGIT1_X, TOP_MARGIN}, // unit hours 0..9
    { 0, 0, 6,  DIGIT2_X, TOP_MARGIN}, // dec min  0..5
    { 0, 0, 10, DIGIT3_X, TOP_MARGIN}  // unit min 0..9
};

rtccTime Alarm;             // alarm time (hours/min)
int  sAlarm = A_ON;         // alarm state machine status


int toDec( BYTE bcd)
{
    return (bcd>>4) * 10 + (bcd & 0xf);
}

BYTE toBCD( int dec)
{
    return (BYTE)((dec/10)<<4) + (dec%10);
}


void incBCD( BYTE *bcd, int step, int base, int sat)
{
    int dec = toDec( *bcd);

    *bcd = ( dec == sat) ? toBCD( base) : toBCD( dec+step);
}


void decBCD( BYTE *bcd, int step, int base, int sat)
{
    int dec = toDec( *bcd);
    *bcd = ( dec == base) ? toBCD( sat) : toBCD( dec-step);
}


// a version of PutImage8BPP which paints only 1/2 of the bitmap vertically
//
void PutImageX(SHORT left, SHORT top, IMAGE_FLASH *image)
{
    FLASH_BYTE  *flashAddress;
    BYTE        temp;
    WORD        sizeX, sizeY;
    WORD        x, y;
    WORD        xc, yc;
    WORD        palette[256];

    // Move pointer to size information
    flashAddress =  image->address;
    flashAddress += 2;

    // Read image size
    sizeY = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;
    sizeX = *((FLASH_WORD *)flashAddress);
    flashAddress += 2;

    // Read palette
    for( x=0; x<256; x++)
    {
        palette[x] = *((FLASH_WORD *)flashAddress);
        flashAddress += 2;
    }

    // Paint the bitmap
    yc = top;
    for( y=0; y<sizeY; y+=2)
    {
        xc = left;
        for( x=0; x<sizeX; x++)
        {
            temp = *flashAddress++;
            SetColor(palette[ temp]);
            PutPixel( xc++, yc);
        }
        yc++;
        flashAddress += sizeX;  // skip a line every other
    }
} // PutImageX


void CenterString( int p, char *s)
{  // p  integer offset (lines) above or below center
   // s  string
    int x, y, width;

    // get center position
    y = GetMaxY()/2 - (1 + p) * GetTextHeight(( void*)&GOLFontDefault);
    width = GetTextWidth( s, (void*) &GOLFontDefault);
    x = (GetMaxX() - width)/2;

    // set and print
    OutTextXY( x,y, s);
} // CenterString


void InitRTCC( char* sDate)
{
    rtccTime  time;
    time.hour = 0x23; time.min = 0x59; time.sec = 0x50;   // hour[0..23] min[0..59] sec[0..59]

    rtccDate date;
    date.year = toBCD(atoi( &sDate[9]));    // year (last two digits)
    date.mday = toBCD(atoi( &sDate[4]));    // day[1..31]
    // find the mon
    for (date.mon=0; date.mon<12; date.mon++)
        if (strncmp(sMonth[date.mon], &sDate[0], 3 ) == 0)
            break;
    date.mon = toBCD( date.mon+1);          // month [1..12]

    RtccInit();                             // init RTCC clock
    RtccWrEnable( 1);                       // unlock and enable writing to RTCC

    RtccSetTimeDate( time.l, date.l);

    RtccEnable();                           // enables RTCC and locks

} // InitRTCC


void SolariInit( void)
{
    InitGraph();
    SetColor( Background);
    ClearDevice();
    SetColor( GREEN);
    SetFont( (void *) &GOLFontDefault);
}


void drawDigit( int d)
{
    digit_t *dp = &dgt[d];
    switch (dp->state & 3){
    case 0:
        PutImage(  dp->posx, dp->posy, (void *) pa[dp->value], IMAGE_NORMAL );
        PutImage(  dp->posx, dp->posy+DIGIT_H2, (void *) pb[dp->value], IMAGE_NORMAL );
        break;
    case 1:
        PutImage(  dp->posx, dp->posy, (void *) pa[(dp->value+1) % dp->mod], IMAGE_NORMAL );
        PutImageX(  dp->posx, dp->posy+DIGIT_H4, (void *) pa[dp->value] );
        //PutImage(  dp->posx, dp->posy+DIGIT_H2, (void *) pb[dp->value], IMAGE_NORMAL );
        break;
    case 2:
        PutImage(  dp->posx, dp->posy, (void *) pa[(dp->value+1) % dp->mod], IMAGE_NORMAL );
        PutImage(  dp->posx, dp->posy+DIGIT_H2, (void *) pb[dp->value], IMAGE_NORMAL );
        break;
    case 3:
        PutImage(  dp->posx, dp->posy+DIGIT_H2, (void *) pb[dp->value], IMAGE_NORMAL );
        PutImageX(  dp->posx, dp->posy+DIGIT_H2, (void *) pb[(dp->value+1) % dp->mod]);
        break;
    }
} // drawDigit


void setSolari( rtccTime *Time)
{
    // set new values
    dgt[0].value = Time->hour >>4;      dgt[1].value = Time->hour & 0xf;
    dgt[2].value = Time->min  >>4;      dgt[3].value = Time->min & 0xf;
    dgt[0].state = 0; dgt[1].state = 0;  dgt[2].state = 0;  dgt[3].state = 0;

    // draw bevel
    Bevel( LEFT_MARGIN-2, TOP_MARGIN-2, DIGIT3_X + DIGIT_W +2, TOP_MARGIN + 2*DIGIT_H2+2, 10);
    // draw digits
    drawDigit( 0); drawDigit( 1); drawDigit( 2); drawDigit( 3);
} 


void rollSolari( rtccTime *Time)
{
    int j;
    int b[4];

    // unpack four digits from new Time
    b[0] = Time->hour >>4;      b[1] = Time->hour & 0xf;
    b[2] = Time->min  >>4;      b[3] = Time->min & 0xf;

    // check which digit needs to be animated
    for(j=0; j<4; j++)
    {
        if ((dgt[j].state != 0) || (dgt[j].value != b[j]))
        {
            dgt[j].state++;     // start animation/increment

            if (dgt[j].state == 4)
            {
                dgt[j].state = 0;
                dgt[j].value = (dgt[j].value+1) % dgt[j].mod;
            }
            drawDigit( j);
        }
    } // for j
} // displayTime


void displaySeconds( rtccTime *Time)
{
    int i, sec = (Time->sec>>4)*10 + (Time->sec & 0xf);

    // display blinking seconds "column"
    if ( sec & 1)
        SetColor( Foreground);
    else
        SetColor( Background);

    Bar( SEC_LEFT, SEC_POS-SEC_GAP, SEC_LEFT+SEC_SIZE, SEC_POS-SEC_GAP+SEC_SIZE);
    Bar( SEC_LEFT, SEC_POS+SEC_GAP, SEC_LEFT+SEC_SIZE, SEC_POS+SEC_GAP+SEC_SIZE);

    // display progress bar
    SetColor( Background);
    Bar( PBAR_L + 2*sec, PBAR_T, PBAR_L+2*60, PBAR_T+PBAR_H);
    SetColor( Foreground);
    Bar( PBAR_L, PBAR_T, PBAR_L + 2*sec, PBAR_T+PBAR_H);
    // display tick marks (10sec)
    for( i=0; i<=60; i+=10)
        Line( PBAR_L + 2*i, PBAR_T-4, PBAR_L + 2*i, PBAR_T+8  );

} // display Seconds



void displayDate( rtccDate *Date, int y)
{
    char s[64];
    int  month = Date->mon;
    int  width, edge;

    // convert BCD month value to decimal
    month -= ( month > 9) ? 6 : 0;
    sprintf( s, "%s %d%d %s 20%d%d", sWeekDay[ Date->wday],
                                     Date->mday>>4, Date->mday&0xf,
                                     sMonth[ month-1],
                                     Date->year>>4, Date->year&0xf);
    width = GetTextWidth( s, (void*) &GOLFontDefault);
    edge = (GetMaxX()-width)>>1;

    // clear text area
    SetColor( Background);
    Bar( edge-5, y, GetMaxX()-edge+5, y+GetTextHeight( (void *)&GOLFontDefault));

    // center text
    SetColor( Foreground);
    OutTextXY( edge, y, s);
} // display Date


void displayDateTop( rtccDate *Date)
{
    displayDate( Date, DATEY);
}


void upArrow( int x, int w)
{
    w>>=1;
    SetColor( Foreground);
    MoveTo( x, ARROW_TOP);
    LineRel( +w, -ARROW_H); LineRel( +w, +ARROW_H);
    LineRel( -(w<<1), 0);
}


void downArrow( int x, int w)
{
    w>>=1;
    SetColor( Foreground);
    MoveTo( x, ARROW_BOT);
    LineRel( +w, +ARROW_H); LineRel( +w, -ARROW_H);
    LineRel( -(w<<1), 0);
}


void initTimeSettingPage( void)
{
    char s[]= "Set Time";
    int width;

    SetColor( Background);
    ClearDevice();
    SetColor( Foreground);
    width = GetTextWidth( s, (void*) &GOLFontDefault);
    OutTextXY( (GetMaxX()-width)>>1, 2, s);

    // draw up and down buttons
    upArrow(    DIGIT0_X, 2*DIGIT_W+SPACING);   // up hours
    downArrow(  DIGIT0_X, 2*DIGIT_W+SPACING);   // down hours

    upArrow(    DIGIT2_X, 2*DIGIT_W+SPACING);   // up minutes
    downArrow(  DIGIT2_X, 2*DIGIT_W+SPACING);   // down minutes
}


void initAlarmSettingPage( void)
{
    char s[] = "Set Alarm";
    int width;

    SetColor( Background);
    ClearDevice();
    SetColor( Foreground);
    width = GetTextWidth( s, (void*) &GOLFontDefault);
    OutTextXY( (GetMaxX()-width)>>1, 2, s);

    // draw up and down buttons
    upArrow(    DIGIT0_X, 2*DIGIT_W+SPACING);   // up hours
    downArrow(  DIGIT0_X, 2*DIGIT_W+SPACING);   // down hours

    upArrow(    DIGIT2_X, 2*DIGIT_W+SPACING);   // up minutes
    downArrow(  DIGIT2_X, 2*DIGIT_W+SPACING);   // down minutes
}


void initDateSettingPage( void)
{
    char s[]= "Set Date";
    int width;

    SetColor( Background);
    ClearDevice();
    SetColor( Foreground);
    width = GetTextWidth( s, (void*) &GOLFontDefault);
    OutTextXY( (GetMaxX()-width)>>1, 2, s);

    // draw up and down buttons
    upArrow(    DIGIT0_X, DIGIT_W);   // up wday
    downArrow(  DIGIT0_X, DIGIT_W);   // down wday

    upArrow(    DIGIT1_X, DIGIT_W);   // up mday
    downArrow(  DIGIT1_X, DIGIT_W);   // down mday

    upArrow(    DIGIT2_X, DIGIT_W);   // up mon
    downArrow(  DIGIT2_X, DIGIT_W);   // down mon

    upArrow(    DIGIT3_X, DIGIT_W);   // up year
    downArrow(  DIGIT3_X, DIGIT_W);   // down year
}


void displayMoon(void)
{
    PutImage( GetMaxX()-45, 10, (void*)&moon, IMAGE_NORMAL);
}


void displayAlarm( int state)
{
    char s[8];

    // clear the area
    SetColor(Background);
    Bar( 0, 0, 75, 75);
    SetColor(Foreground);

    // init the icons
    switch( state)
    {
        case A_OFF:
            PutImage( 5, 5, (void*)&empty, IMAGE_NORMAL);
            break;
        case A_SNOOZE:
            PutImage( 5, 5, (void*)&Zzz,   IMAGE_NORMAL);
            break;
        case A_RING:
        case A_ON:
        case A_ACK:        
        default:
            PutImage( 5, 5, (void*)&bell,  IMAGE_NORMAL);
            break;
    }

    // show the alarm time
    sprintf( s, "%02d:%02d", toDec( Alarm.hour), toDec( Alarm.min));
    OutTextXY( 5, 50, s);
} // display Alarm
