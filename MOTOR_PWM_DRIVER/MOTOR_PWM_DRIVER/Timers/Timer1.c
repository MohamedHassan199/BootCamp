/*
 * Timer1.c
 *
 * Created: 2/21/2019 12:12:49 PM
 *  Author: AVE-LAP-064
 */ 



#include "Timer1.h"
void Timer1_init (void)
{  /* clear TCNT1 */
    TCNT1H = LOW;
	TCNT1L = LOW;
	/* setting motor pins to outputs*/
	DIO_SetPinDirection(OC1B,HIGH);
	DIO_SetPinDirection(OC1A,HIGH);
	DIO_SetPinDirection(PIN26,HIGH);
	DIO_SetPinDirection(PIN27,HIGH);
	DIO_SetPinDirection(PIN30,HIGH);
	DIO_SetPinDirection(PIN31,HIGH);

	
   /*Set ICR1 with top value */
	ICR1H  = (TOP_VAL >> 8);
	ICR1L  = TOP_VAL ;

}



