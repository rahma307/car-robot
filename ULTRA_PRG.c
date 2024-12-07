#include  "STD_TYPES.h"
#include  "BIT_MATH.h"
#include   "util/delay.h"
#include  "TIMER_interface.h"
#include  "ULTRA_INT.h"
#include   "DIO_INT.h"
#include    "GLOPAL_INT.h"


static u16 capt1=0, capt2 =0, ovf=0 , ov=0 ;
static u8 mask =0 ;
static u32 ticks =0;

void ULTRA_INT(void){
	TIMER_u8SetCallBack(&ISR_ultra,TIMER1_ICU_VECTOR_ID);
	TIMER_u8SetCallBack(&ISR_OVER_FLOW,TIMER1_OVF_VECTOR_ID);
	GI_voidEnable();
	TIMER1_voidInit();
	TIMER_voidICUInitEnable();
	TIMER_voidoverflowENableInterrupt();
	 TIMER2_voidSetPreload(0);
	 TIMER1_voidSetICR1(0);

}

u8  ULTRA_distance(u32 *distance) {
	u8 LOCAL_ERROR_STATE = STD_TYPES_OK ;
	 if(distance !=NULL){
         DIO_u8SetPinValue(PORTD , PIN_7 , LOGIC_HIGH);
		 _delay_us(10);
		 DIO_u8SetPinValue(PORTD , PIN_7 , LOGIC_LOW);
		 while( mask <2);
			mask =0 ;
			ticks = (u32)capt2 + (u32)(ovf*65535)-(u32)capt1 ;
			*distance = (u32)ticks/58 ;
             ov =0 ;
             ovf=0;
             capt1=0 ;
             capt2 =0 ;
             ticks =0 ;
             TIMER1_Clear_ICR_FLAG();
             TIMER1_Clear_OVER_FLOW_FLAG();
             TIMER_voidICUInitEnable();
             TIMER_voidoverflowENableInterrupt();
             TIMER2_voidSetPreload(0);
             TIMER1_voidSetICR1(0);

             _delay_ms(200);



	 }
	 else{
		 LOCAL_ERROR_STATE = STD_TYPES_NOK ;
	 }

	return LOCAL_ERROR_STATE ;
}

void ISR_OVER_FLOW(void){
	ov++ ;
}

void ISR_ultra(void){

	if( mask ==0){
		ov =0 ;
		capt1 = TIMER_u16GetICR();
		TIMER_voidICUSetTriggerEdge(TIMER_u8_ICP_FALLING_EDGE);

	}
	else if(  mask==1){
		ovf = ov ;
		capt2 = TIMER_u16GetICR() ;
		TIMER_voidICUSetTriggerEdge(TIMER_u8_ICP_RAISING_EDGE);
		TIMER_voidICUDisableInterrupt();
		TIMER_voidoverflowDisableInterrupt();

	}
	mask++;


}
