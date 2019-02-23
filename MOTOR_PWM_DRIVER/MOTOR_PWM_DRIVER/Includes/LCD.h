/*
 * LCD.h
 *
 * Created: 2/19/2019 11:14:48 AM
 *  Author: AVE-LAP-064
 */ 


#ifndef LCD_H_
#define LCD_H_

/*libraries */
#include "DIO.h"
#include "LCD_cfg.h"
/*-------------------------------------------------------------------------------*/
/*MACROS  */

#define CMND_4BIT_MODE      0x33  
#define CMND_4BIT           0x32
#define CMND_TWO_LINES      0x28
#define DISPLAY_ON			0x0E
#define CLEAR_SCREEN		0x01
#define SHIFT_CURSOR		0x06
#define Delay				_delay_ms
#define FIRST_LINE          0x80
#define CMND_8BIT_MODE      0x38 
#define FIRST_CHAR_LOC      0x40
#define SECOND_CHAR_LOC     0x48
#define Shift_Right			0x1C   
#define Shift_left			0x18

#define HIGH				1
#define LOW					0
#define D0                  0
#define D1                  1
#define D2                  2
#define D3                  3
#define D4					4
#define D5					5
#define D6					6
#define D7					7
#define D8                  8
#define D24                 24

#define	BUTTON0				10
#define BUTTON1				20
 
 
#define ROW_ONE				0x80
#define COL_ONE				0xC0

#define ZERO_ASCII          48

#define ONE_MS				1
#define TWO_MS				2
#define FIVE_MS             5
#define TEN_MS				10
#define HALF_MS				500
#define ONE_THOUSAND_MS		1000
#define TWO_THOUSAND_MS		2000
#define THREE_THOUSAND_MS	3000
#define FOUR_THOUSAND_MS	4000
#define FIVE_THOUSAND_MS	5000
/*-------------------------------------------------------------------------------*/
/* Prototype of APIs */

#ifdef  LCD_FOUR_BIT  
	void LCD_init(void);
	void LCD_sendCommand(uint8 CMND);
	void LCD_displayChar(uint8 data);
	void LCD_gotoRowColumn(uint8 row,uint8 col);
	void LCD_displayString(uint8 *ptr);
	void LCD_displayStringRowColumn(uint8 *ptr,uint8 row,uint8 col);
	void LCD_clear(void);
	void emoji_happy_init(void);
	void emoji_sad_init(void);
	void Init_game(void);
	uint8 Button_check(uint8 num);
	void Button_init(void);
	void LCD_General_Question(void);

#else
    void LCD_init_Eight_bit(void);
	void LCD_sendCommand_Eight_bit(uint8 CMND);
	void LCD_displayChar_Eight_bit(uint8 data);
    void LCD_gotoRowColumn(uint8 row,uint8 col);
    void LCD_displayString(uint8 *ptr);
    void LCD_displayStringRowColumn(uint8 *ptr,uint8 row,uint8 col);
    void LCD_clear(void);
	
#endif

#endif /* LCD_H_ */