/*
 * DIO.c
 *
 * Created: 2/13/2019 2:56:43 PM
 *  Author: AVE-LAP-064
 */
#include "DIO_REGISTERS.h"
#include "DIO.h"

void DIO_WritePin(uint8 PinNum,uint8 PinValue)
{   
	  /* PORTA 0~7 */
		if((PinNum>=PIN0)&&(PinNum<=PIN7))
		{    if(PinValue) { Set_bit(PORTA, PinNum); }
			 else { Clear_bit(PORTA ,PinNum); }
		}
		
		/* PORTB 8~15 */
		else if((PinNum>=PIN8)&&(PinNum<=PIN15))
		{    if(PinValue) { Set_bit(PORTB, (PinNum-PIN8)); }
			else { Clear_bit(PORTB ,(PinNum-PIN8)); }
		}
		/* PORTC 16~23 */
		else if((PinNum>=PIN16)&&(PinNum<=PIN23))
		{    if(PinValue) { Set_bit(PORTC, (PinNum-PIN16)); }
			else { Clear_bit(PORTC ,(PinNum-PIN16)); }
		}
		/* PORTD PIN24~31 */
		else if((PinNum>=PIN24)&&(PinNum<=PIN31))
		{    if(PinValue) { Set_bit(PORTD, (PinNum-PIN24)); }
			else { Clear_bit(PORTD ,(PinNum-PIN24)); }
	    }
	   else {return LOW; }
}

uint8 DIO_ReadPin(uint8 PinNum)
{
	if((PinNum>=PIN0)&&(PinNum<=PIN7))   /* PORTA 0~7 */
	{
		return (Get_bit(PINA,PinNum));
	}
	else if((PinNum>=PIN8)&&(PinNum<=PIN15)) /* PORTB 8~15 */
	{
		return (Get_bit(PINB,(PinNum-PIN8)));
	}
	else if((PinNum>=PIN16)&&(PinNum<=PIN23)) /* PORTC 16~23 */
	{ 
		return (Get_bit(PINC,(PinNum-PIN16)));
	}

	else if((PinNum>=PIN16)&&(PinNum<=PIN23)) /* PORTD 24~31 */
	{
		return (Get_bit(PIND,(PinNum-PIN24)));
	}
	else {return LOW;}
}

 void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection)
 {    /* PORTA PIN0~PIN7 */
     	if((PinNum>=PIN0)&&(PinNum<=PIN7))
     	{    if(PinDirection) { Set_bit(DDRA, PinNum); }
     		else { Clear_bit(DDRA ,PinNum); }
     	}
     	
     	/* PORTB 8~15 */
     	else if((PinNum>=PIN8)&&(PinNum<=PIN15))
     	{    if(PinDirection) { Set_bit(DDRB, (PinNum-PIN8)); }
     	     else { Clear_bit(DDRB ,(PinNum-PIN8)); }
        }
     /* PORTC 16~23 */
		else if((PinNum>=PIN16)&&(PinNum<=PIN23))
		{    if(PinDirection) { Set_bit(DDRC, (PinNum-PIN16)); }
		     else { Clear_bit(DDRC ,(PinNum-PIN16)); }
		}
      /* PORTD PIN24~31 */
		else if((PinNum>=PIN24)&&(PinNum<=PIN31))
		{      if(PinDirection) { Set_bit(DDRD, (PinNum-PIN24)); }
            else { Clear_bit(DDRD ,(PinNum-PIN24)); }
		}
		else { }
	
 }

