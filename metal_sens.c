/*
 * metal_sens.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: hp
 */

#include  "STD_TYPES.h"
#include   "DIO_INT.h"
#include   "GLOPAL_INT.h"
#include  "EXTI_INT.h"
#include  "motion.h"
#include   "metal_sens_config.h"
#include   "metal_sens_int.h"
#include   "servo_int.h"

void metaldetect(void){
	GI_voidEnable();
	EXTI_u8EXTEnable(EXT0,rising_edge);
	EXTI_SET_CALL_BACK(&notification , EXT0);
}

void notification(void){
  u8 value ;
  DIO_u8GetPinValue(PORTD,PIN_2,&value);
	while( value == LOGIC_HIGH){
		move(stop);
		setServoDuty(forward_servo);
		DIO_u8SetPinValue(metal_alarm_PORT,metal_alarm_pin, LOGIC_HIGH);
		DIO_u8GetPinValue(PORTD,PIN_2,&value);
	}
	DIO_u8SetPinValue(metal_alarm_PORT,metal_alarm_pin, LOGIC_LOW);
}

