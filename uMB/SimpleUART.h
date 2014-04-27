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
extern void  UARTPutChar(BYTE ch);

/*********************************************************************
* Function: void UARTPutByte(BYTE hex)
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
extern void UARTPutByte(BYTE byte);

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
extern void UARTPutWord(WORD word);

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
extern void UARTPutDWord(DWORD dword);

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
extern void UARTPutString(char* str);

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
extern BYTE UARTGetChar();

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
extern BYTE UARTWaitChar();

/*********************************************************************
* Macros: UARTIsReceived()
*
* PreCondition: none
*
* Input: none
*
* Output: zero if character is not received
*
* Side Effects: none
*
* Overview: checks if data is available
*
* Note: none
*
********************************************************************/
#define UARTIsDA() U2STAbits.URXDA

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
extern BYTE Char2Hex(BYTE ch);

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
extern BYTE Hex2Char(BYTE hex);

