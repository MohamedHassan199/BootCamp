/*
 * MOTOR_PWM_DRIVER.c
 *
 * Created: 2/21/2019 11:58:05 AM
 * Author : AVE-LAP-064
 */ 

#include "Timer1.h"


int main(void)
{   
	 uint8 i= 0 ;
	 Timer1_init(); /* initiallizing */
	  Motor_Direction(ANTI_CLOCKWISE);  /* CLOCKWISE  or ANTI-CLOCKWISE */
	 //Duty_cycle((DUTY_CYCLE) ,FAST_PWM_INVERTING_MODE);

	 
    
    while (1) 
    {  
		for(i=0;i<100;i+=10)
		{ Duty_cycle(i ,FAST_PWM_NON_INVERTING_MODE);  /*Changing speed  of motor */
		}
    }
}

