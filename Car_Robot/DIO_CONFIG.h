#ifndef DIO_CONFIG_H
#define DIO_CONFIG_H

/*  initial direction for all pins */


/*     Options : DIO_u8_INITIL_OUTPUT    
                 DIO_u8_INITIL_INPUT     */
				 
				 
				 
				 

/* PORTA */

#define DIO_u8_PA0_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT//motor
#define DIO_u8_PA1_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT//motor
#define DIO_u8_PA2_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT//motor
#define DIO_u8_PA3_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT//motor
#define DIO_u8_PA4_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT// led test
#define DIO_u8_PA5_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT
#define DIO_u8_PA6_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT
#define DIO_u8_PA7_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT
								             
/* PORTB */                                   
#define DIO_u8_PB0_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT  
#define DIO_u8_PB1_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PB2_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PB3_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PB4_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PB5_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PB6_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PB7_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
								              
/* PORTC */
#define DIO_u8_PC0_INTIAL_DIRECTION          DIO_u8_INITIL_OUTPUT  //servo
#define DIO_u8_PC1_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PC2_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PC3_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PC4_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PC5_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PC6_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
#define DIO_u8_PC7_INTIAL_DIRECTION          DIO_u8_INITIL_INPUT
								              
/* PORTD */                         
#define DIO_u8_PD0_INTIAL_DIRECTION         DIO_u8_INITIL_OUTPUT
#define DIO_u8_PD1_INTIAL_DIRECTION         DIO_u8_INITIL_INPUT
#define DIO_u8_PD2_INTIAL_DIRECTION         DIO_u8_INITIL_INPUT//metal detector
#define DIO_u8_PD3_INTIAL_DIRECTION         DIO_u8_INITIL_INPUT
#define DIO_u8_PD4_INTIAL_DIRECTION         DIO_u8_INITIL_INPUT
#define DIO_u8_PD5_INTIAL_DIRECTION         DIO_u8_INITIL_INPUT
#define DIO_u8_PD6_INTIAL_DIRECTION         DIO_u8_INITIL_INPUT//echo
#define DIO_u8_PD7_INTIAL_DIRECTION         DIO_u8_INITIL_OUTPUT//trig



/*  initial value for all pins */


/*     Options : DIO_u8_OUTPUT_HIGH    
                 DIO_u8_OUTPUT_LOW 
                 DIO_u8_INPUT_FLOATTING
                 DIO_u8_INPUT_PULLUP				  
			 
				 */
				 
				 

/* PORTA */

#define DIO_u8_PA0_INTIAL_VALUE             DIO_u8_OUTPUT_LOW
#define DIO_u8_PA1_INTIAL_VALUE             DIO_u8_OUTPUT_LOW
#define DIO_u8_PA2_INTIAL_VALUE            DIO_u8_OUTPUT_LOW
#define DIO_u8_PA3_INTIAL_VALUE            DIO_u8_OUTPUT_LOW
#define DIO_u8_PA4_INTIAL_VALUE            DIO_u8_OUTPUT_LOW// led test
#define DIO_u8_PA5_INTIAL_VALUE            DIO_u8_OUTPUT_LOW
#define DIO_u8_PA6_INTIAL_VALUE            DIO_u8_OUTPUT_LOW
#define DIO_u8_PA7_INTIAL_VALUE            DIO_u8_OUTPUT_LOW
					          
/* PORTB */                                   
#define DIO_u8_PB0_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING  
#define DIO_u8_PB1_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PB2_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PB3_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PB4_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PB5_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PB6_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PB7_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
								         
/* PORTC */                                  
#define DIO_u8_PC0_INTIAL_VALUE            DIO_u8_OUTPUT_LOW
#define DIO_u8_PC1_INTIAL_VALUE           DIO_u8_INPUT_FLOATTING
#define DIO_u8_PC2_INTIAL_VALUE           DIO_u8_INPUT_FLOATTING
#define DIO_u8_PC3_INTIAL_VALUE           DIO_u8_INPUT_FLOATTING
#define DIO_u8_PC4_INTIAL_VALUE           DIO_u8_INPUT_FLOATTING
#define DIO_u8_PC5_INTIAL_VALUE           DIO_u8_INPUT_FLOATTING
#define DIO_u8_PC6_INTIAL_VALUE           DIO_u8_INPUT_FLOATTING
#define DIO_u8_PC7_INTIAL_VALUE           DIO_u8_INPUT_FLOATTING
								              
/* PORTD */                         
#define DIO_u8_PD0_INTIAL_VALUE          DIO_u8_OUTPUT_LOW
#define DIO_u8_PD1_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PD2_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PD3_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PD4_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PD5_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PD6_INTIAL_VALUE          DIO_u8_INPUT_FLOATTING
#define DIO_u8_PD7_INTIAL_VALUE           DIO_u8_OUTPUT_LOW






#endif
