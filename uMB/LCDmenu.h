/*
 * File:   menu.h
 *
 *
 * Requires: MAL 2012-10
 */

#include "TimeDelay.h"
#include "LCDTerminal.h"
#include "TouchGrid.h"
#include "MDD File System/FSIO.h"

#define N_ITEMS     12      // maximum length of selection list

/**
 */
int Menu( char list[][16], int items);


/**
 */
void SelectFile( char *fn, char *ext);

