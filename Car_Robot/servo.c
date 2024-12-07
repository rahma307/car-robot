#include  "STD_TYPES.h"
#include  "util/delay.h"
#include   "DIO_INT.h"
#include   "servo_int.h"


void setServoDuty(u16 duartion) {
	u8 i;
	for (i=0; i<5; i++) {
		 DIO_u8SetPinValue(PORTC , PIN_0, LOGIC_HIGH);
		_delay_us(duartion);
		 DIO_u8SetPinValue(PORTC , PIN_0, LOGIC_LOW);
		_delay_us(20000-duartion);
	}
}
