/*
 * ULTRA_INT.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: hp
 */

#ifndef ULTRA_INT_H_
#define ULTRA_INT_H_

void ULTRA_INT(void);
u8   ULTRA_distance(u32 *distance) ;
void ISR_ultra(void);
void ISR_OVER_FLOW(void);

#endif /* ULTRA_INT_H_ */
