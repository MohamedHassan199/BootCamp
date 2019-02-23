/*
 * LCD_cfg.h
 *
 * Created: 2/19/2019 11:16:01 AM
 *  Author: AVE-LAP-064
 */ 


#ifndef LCD_CFG_H_
#define LCD_CFG_H_
#define F_CPU 16000000UL
#include <util/delay.h>

/* choosing four bit mode */
#define FOUR_BIT 1

#define  LCD_RS    1
#define  LCD_RW    2
#define  LCD_E     3   
#define  LCD_PRT   PORTA
#define  LCD_DDR   DDRA



#endif /* LCD_CFG_H_ */