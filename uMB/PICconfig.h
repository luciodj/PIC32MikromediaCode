/*
 * File: PICconfig.h
 *
 * PIC32 Mikromedia  default microcontroller configuration
 */
#include <xc.h>

// this is the default configuration for all book's projects 
// configuration bit settings
#pragma config POSCMOD=XT, FNOSC=PRIPLL
#pragma config FPLLIDIV=DIV_2, FPLLMUL=MUL_20, FPLLODIV=DIV_1
#pragma config FPBDIV=DIV_2
#pragma config FWDTEN=OFF, CP=OFF, BWP=OFF

// can be commented in all projects that don't make use of the USB module
#pragma config UPLLIDIV=DIV_2, UPLLEN=ON
