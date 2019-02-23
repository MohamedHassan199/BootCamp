/*
 * BitWiseOperation.h
 *
 * Created: 2/13/2019 10:54:47 AM
 *  Author: AVE-LAP-064
 */ 


#ifndef BITWISEOPERATION_H_
#define BITWISEOPERATION_H_

#define Set_bit(Reg,bit)       (Reg|=(uint8)(1<<bit))  /*setting bit in register */
#define Clear_bit(Reg,bit)     (Reg&=(uint8)~(1<<bit)) /*clearing bit in register */
#define Toggle_bit(Reg,bit)    ((Reg^=(uint8)(1<<bit))) /*toggle bit in register */
#define Get_bit(Reg,bit)       ((Reg & (uint8)(1<<bit)) ? 1 : 0 ) /*get status of bit in register */
                         



#endif /* BITWISEOPERATION_H_ */