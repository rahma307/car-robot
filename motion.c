/*
 * motion.c
 *
 *  Created on: ??‏/??‏/????
 *      Author: hp
 */

#include "STD_TYPES.h"
#include  "DIO_INT.h"
#include   "motion.h"
#include  "motion_config.h"


void move(u8 direction){
	switch (direction){

	case stop :
		DIO_u8SetPinValue(wheels_port,PIN_3,LOGIC_LOW);
	    DIO_u8SetPinValue(wheels_port,PIN_1,LOGIC_LOW);
	    DIO_u8SetPinValue(wheels_port,PIN_0,LOGIC_LOW);
	    DIO_u8SetPinValue(wheels_port,PIN_2,LOGIC_LOW);

        break ;
    case back :

	  DIO_u8SetPinValue(wheels_port,PIN_0,LOGIC_HIGH);
	  DIO_u8SetPinValue(wheels_port,PIN_3,LOGIC_LOW);
	  DIO_u8SetPinValue(wheels_port,PIN_1,LOGIC_LOW);
	  DIO_u8SetPinValue(wheels_port,PIN_2,LOGIC_HIGH);

		break;

	 case forward:

		DIO_u8SetPinValue(wheels_port,PIN_2,LOGIC_LOW); // in3
	    DIO_u8SetPinValue(wheels_port,PIN_1,LOGIC_HIGH); // in2
	    DIO_u8SetPinValue(wheels_port,PIN_0,LOGIC_LOW);  // in1
	    DIO_u8SetPinValue(wheels_port,PIN_3,LOGIC_HIGH);  //in4


		break ;

	case right:

		DIO_u8SetPinValue(wheels_port,PIN_3,LOGIC_HIGH);
	    DIO_u8SetPinValue(wheels_port,PIN_1,LOGIC_LOW);
	    DIO_u8SetPinValue(wheels_port,PIN_0,LOGIC_HIGH);
	    DIO_u8SetPinValue(wheels_port,PIN_2,LOGIC_LOW);

		break;

	case left :

		DIO_u8SetPinValue(wheels_port,PIN_3,LOGIC_LOW);
	    DIO_u8SetPinValue(wheels_port,PIN_1,LOGIC_HIGH);
	    DIO_u8SetPinValue(wheels_port,PIN_0,LOGIC_LOW);
	    DIO_u8SetPinValue(wheels_port,PIN_2,LOGIC_HIGH);

		break ;



	}


}
