/*
 * Motor.c
 *
 * Created: 2/23/2019 9:36:22 AM
 *  Author: AVE-LAP-064
 */ 
#include "Timer1.h"

void Duty_cycle( uint8 DC , uint8 Mode )  /* controlling motor speed */
{
	switch(Mode)
	{
		case 0 :  /* Fast PWM    Non-inverting mode  , prescale 8 */
		OCR1AH = ((TOP_VAL - (DC * (TOP_VAL+1)))/100) >> 8;  /* activating PWM on OC1A pin */
		OCR1AL = (TOP_VAL - (DC * (TOP_VAL+1)))/100;
		OCR1BH = ((TOP_VAL - (DC * (TOP_VAL+1)))/100) >> 8;  /* activating PWM on OC1B pin */
		OCR1BL = (TOP_VAL - (DC * (TOP_VAL+1)))/100;
		Set_bit(TCCR1A,WGM11);
		Set_bit(TCCR1A,COM1A0);
		Set_bit(TCCR1A,COM1A1);
		Set_bit(TCCR1A,COM1B0);
		Set_bit(TCCR1A,COM1B1);
		Set_bit(TCCR1B,CS11);
		Set_bit(TCCR1B,WGM12);
		Set_bit(TCCR1B,WGM13);
		break;
		
		case 1 : /* Fast PWM    inverting mode */
		OCR1AH = (( DC * (TOP_VAL+1))/100)>>8;     /* activating PWM on OC1A pin */
		OCR1AL = ( DC * (TOP_VAL+1))/100;
		OCR1BH = (( DC * (TOP_VAL+1))/100)>>8;     /* activating PWM on OC1B pin */
		OCR1BL = ( DC * (TOP_VAL+1))/100;
		Set_bit(TCCR1A,WGM11);
		Clear_bit(TCCR1A,COM1A0);
		Set_bit(TCCR1A,COM1A1);
		Clear_bit(TCCR1A,COM1B0);
		Set_bit(TCCR1A,COM1B1);
		Set_bit(TCCR1B,CS11);
		Set_bit(TCCR1B,WGM12);
		Set_bit(TCCR1B,WGM13);
		break;
		
		case 2 : /* Phase correct PWM    Non-inverting mode */
		OCR1AH = ((TOP_VAL - (DC * (TOP_VAL+1)))/100) >> 8;  /* activating PWM on OC1A pin */
		OCR1AL = (TOP_VAL - (DC * (TOP_VAL+1)))/100;
		OCR1BH = ((TOP_VAL - (DC * (TOP_VAL+1)))/100) >> 8;  /* activating PWM on OC1B pin */
		OCR1BL = (TOP_VAL - (DC * (TOP_VAL+1)))/100;
		Set_bit(TCCR1A,WGM11);
		Set_bit(TCCR1A,COM1A0);
		Set_bit(TCCR1A,COM1A1);
		Set_bit(TCCR1A,COM1B0);
		Set_bit(TCCR1A,COM1B1);
		Set_bit(TCCR1B,CS11);
		Set_bit(TCCR1B,WGM13);
		break;
		
		case 3 : /* Phase correct PWM    Non-inverting mode */
		OCR1AH = (( DC * (TOP_VAL+1)))>>8;    /* activating PWM on OC1A pin */
		OCR1AL = ( DC * (TOP_VAL+1));
		OCR1BH = (( DC * (TOP_VAL+1)))>>8;     /* activating PWM on OC1B pin */
		OCR1BL = ( DC * (TOP_VAL+1));
		Set_bit(TCCR1A,WGM11);
		Clear_bit(TCCR1A,COM1A0);
		Set_bit(TCCR1A,COM1A1);
		Clear_bit(TCCR1A,COM1B0);
		Set_bit(TCCR1A,COM1B1);
		Set_bit(TCCR1B,CS11);
		Set_bit(TCCR1B,WGM13);
		break;
	}
}

void Motor_Direction(uint8 clockwise)
{   switch(clockwise)
	{
	 /* clockwise direction */
	 case 0:
			DIO_WritePin(PIN26,HIGH);
			DIO_WritePin(PIN27,LOW);
			DIO_WritePin(PIN30,HIGH);
			DIO_WritePin(PIN31,LOW);
			break;
	case 1: /* anti clock_wise direction */
			 DIO_WritePin(PIN26,LOW);
			 DIO_WritePin(PIN27,HIGH);
			 DIO_WritePin(PIN30,LOW);
			 DIO_WritePin(PIN31,HIGH);
			 break;
			
	}
}