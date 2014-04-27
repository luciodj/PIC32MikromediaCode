
/*****************************************************************************
 * Simple UART driver
 *****************************************************************************/

#include <plib.h>
#include "SimpleUART.h"

/*********************************************************************
* Function: void UARTPutChar(BYTE ch)
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: puts character
*
* Note: none
*
********************************************************************/
void  UARTPutChar(BYTE ch){
  // Wait for Tx buffer is not full
  while(U2STAbits.UTXBF == 1);
  U2TXREG = ch;
}

/*********************************************************************
* Function: void UARTPutHex(BYTE hex)
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: puts HEX code of byte
*
* Note: none
*
********************************************************************/
void UARTPutByte(BYTE byte){
  UARTPutChar(Hex2Char(byte>>4));
  UARTPutChar(Hex2Char(byte&0x0f));
}

/*********************************************************************
* Function: void UARTPutWord(WORD_VAL word)
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: puts HEX code of word
*
* Note: none
*
********************************************************************/
void UARTPutWord(WORD word)
{
  UARTPutByte(((WORD_VAL)word).v[1]);
  UARTPutByte(((WORD_VAL)word).v[0]);
}

/*********************************************************************
* Function: void UARTPutDWord(DWORD_VAL dword)
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: puts HEX code of double word
*
* Note: none
*
********************************************************************/
void UARTPutDWord(DWORD dword){
  UARTPutWord(((DWORD_VAL)dword).w[1]);
  UARTPutWord(((DWORD_VAL)dword).w[0]);
}

/*********************************************************************
* Function: void UARTPutString(char* str)
*
* PreCondition: none
*
* Input: none
*
* Output: none
*
* Side Effects: none
*
* Overview: puts string
*
* Note: none
*
********************************************************************/
void UARTPutString(char* str){
  while(*str)
    UARTPutChar(*str++);    
}

/*********************************************************************
* Function: BYTE UARTGetChar()
*
* PreCondition: none
*
* Input: none
*
* Output: last character received
*
* Side Effects: none
*
* Overview: returns last character received
*
* Note: none
*
********************************************************************/
BYTE UARTGetChar(){
BYTE temp;

    temp = U2RXREG;

    // Clear error flag
    U2STAbits.OERR = 0;

    return temp;
}

/*********************************************************************
* Function: BYTE UARTWaitChar()
*
* PreCondition: none
*
* Input: none
*
* Output: character received
*
* Side Effects: none
*
* Overview: wait for character
*
* Note: none
*
********************************************************************/
BYTE UARTWaitChar(){
    // Clear error flag
    if(U2STAbits.OERR)
		U2STAbits.OERR = 0;

    // Wait for new data
    while(U2STAbits.URXDA == 0);

    return UARTGetChar();
}


/*********************************************************************
* Function: BYTE Char2Hex(BYTE ch)
*
* PreCondition: none
*
* Input: ASCII to be converted
*
* Output: number
*
* Side Effects: none
*
* Overview: converts ASCII coded digit into number
*
* Note: none
*
********************************************************************/
BYTE Char2Hex(BYTE ch){
  // Wrong char
  if(ch > 102)
    return 0;  
  
  // From a to f     
  if(ch > 96)
    return (ch-87);
    
  // Wrong char    
  if(ch > 70)
    return 0;
  
  // From A to F    
  if(ch > 64)
    return (ch-55);

  // Wrong char  
  if(ch > 57)
    return 0;
  
  // From 0 - 9
  if(ch > 47)
    return(ch-48);
  else
  // Wrong char
    return 0;
}

/*********************************************************************
* Function: BYTE Hex2Char(BYTE hex)
*
* PreCondition: none
*
* Input: number
*
* Output: ASCII code
*
* Side Effects: none
*
* Overview: converts low nibble into ASCII coded digit
*
* Note: none
*
********************************************************************/
BYTE Hex2Char(BYTE hex){
BYTE h;
  h = hex&0x0f;
  // From 0xa to 0xf
  if(h>9)
    return (h+55);
  else
    return (h+48);
}
