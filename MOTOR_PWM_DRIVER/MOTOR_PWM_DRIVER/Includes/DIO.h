/*
 * DIO.h
 *
 * Created: 2/13/2019 2:57:47 PM
 *  Author: AVE-LAP-064
 */ 


#ifndef DIO_H_
#define DIO_H_
/* Libraries */
#include "DIO_REGISTERS.h"
#include "BitWiseOperation.h"

/* MACROS */
#define PIN0   0
#define PIN7   7
#define PIN8   8
#define PIN15  15
#define PIN16  16
#define PIN23  23
#define PIN24  24
#define PIN31  31

#define HIGH 1
#define LOW  0
/* Prototypes */
extern void DIO_WritePin(uint8 PinNum,uint8 PinValue);
extern uint8 DIO_ReadPin(uint8 PinNum);
extern void DIO_SetPinDirection(uint8 PinNum,uint8 PinDirection);



#endif /* DIO_H_ */