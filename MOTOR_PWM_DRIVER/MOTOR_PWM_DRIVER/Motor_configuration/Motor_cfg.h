/*
 * Motor_cfg.h
 *
 * Created: 2/23/2019 9:29:21 AM
 *  Author: AVE-LAP-064
 */ 


#ifndef MOTOR_CFG_H_
#define MOTOR_CFG_H_
/*-------------------------------------------------------------------------------------------------------------------*/
/* motor configuration */
/* mode required */
#define  FAST_PWM_NON_INVERTING_MODE			0
#define  FAST_PWM_INVERTING_MODE				1
#define  PHASE_CORRECT_PWM_NON_INVERTING_MODE   2
#define  PHASE_CORRECT_PWM_NON_INVERTING_MODE   3
/*top Value */
#define  TOP_VAL			                    5000
#define  DUTY_CYCLE                             50
/*motor direction */
#define  CLOCKWISE                              0
#define  ANTI_CLOCKWISE                         1


/*-------------------------------------------------------------------------------------------------------------------*/

#endif /* MOTOR_CFG_H_ */