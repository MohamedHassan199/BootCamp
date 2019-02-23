/*
 * Timer1.h
 *
 * Created: 2/21/2019 12:13:03 PM
 *  Author: AVE-LAP-064
 */ 


#ifndef TIMER1_H_
#define TIMER1_H_

/*including libraries */

#include "DIO.h"
#include "Motor_cfg.h"
/*---------------------------------------------------------------------------------------------------*/
/* defining high and low */
#define HIGH    1
#define LOW     0
/*---------------------------------------------------------------------------------------------------*/

/*Timers Registers */
#define TCCR1A               (*((volatile ptr8) 0x4F))
#define TCCR1B               (*((volatile ptr8) 0x4E))
#define TCNT1H               (*((volatile ptr8) 0x4D))
#define TCNT1L               (*((volatile ptr8) 0x4C))
#define OCR1AH               (*((volatile ptr8) 0x4B)) 
#define OCR1AL               (*((volatile ptr8) 0x4A))
#define OCR1BH               (*((volatile ptr8) 0x49))
#define OCR1BL               (*((volatile ptr8) 0x48))
#define TIMSK                (*((volatile ptr8) 0x59))
#define SREG                 (*((volatile ptr8) 0x5F))
#define ICR1H                (*((volatile ptr8) 0x47))
#define ICR1L                (*((volatile ptr8) 0x46))
/*---------------------------------------------------------------------------------------------------*/

/*Timers Bits */
#define CS10            0
#define CS11            1
#define CS12            2
#define WGM10           0
#define WGM11           1
#define WGM12           3
#define WGM13           4
#define COM1A0          6
#define COM1A1          7
#define COM1B0          4
#define COM1B1          5
#define OCIE1A          4
#define OCIE1B          3
#define OC1B			28
#define OC1A			29


/*---------------------------------------------------------------------------------------------------*/
/* microcontroller pins to H-bridge */
#define PIN26   26
#define PIN27   27
#define PIN28   28
#define PIN29   29
#define PIN30   30
#define PIN31   31
/*---------------------------------------------------------------------------------------------------*/
/*Function prototypes */

extern void Timer1_init (void);
void Duty_cycle( uint8 DC , uint8 Mode);
void Motor_Direction(uint8 clockwise);

#endif /* TIMER1_H_ */