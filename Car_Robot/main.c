/*
 * main.c
 *
 *  Created on: ??‏/??‏/????
 *      Author: hp
 */
/* LIB */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "util/delay.h"

/* MCAL */
#include "DIO_INT.h"
#include "TIMER_interface.h"
#include "GLOPAL_INT.h"

/* HAL */
#include "servo_int.h"
#include "ULTRA_INT.h"
#include "motion.h"
#include "metal_sens_int.h"

int main() {

    u32 distance, distanceright, distanceleft;
    u8 value;

    DIO_voidInit();   // Initialize DIO pins
    ULTRA_INT();      // Initialize Ultrasonic sensor
    metaldetect();    // Initialize metal detection
    setServoDuty(forward_servo);  // Set servo to move forward

    while (1) {
        ULTRA_distance(&distance);  // Measure distance ahead

        if (distance > 70) {
            DIO_u8SetPinValue(PORTA, PIN_4, LOGIC_LOW);  // Clear obstacle signal
            setServoDuty(forward_servo);  // Move servo forward
            move(forward);  // Move robot forward
        } else if (distance < 70) {
            while (1) {
                move(stop);  // Stop the robot
                setServoDuty(right_servo);  // Turn servo to the right
                ULTRA_distance(&distanceright);  // Measure right distance
                _delay_ms(500);

                setServoDuty(left_servo);  // Turn servo to the left
                ULTRA_distance(&distanceleft);  // Measure left distance
                _delay_ms(500);

                setServoDuty(forward_servo);  // Reset servo to forward

                if (distanceleft > 70 || distanceright > 70) {
                    move(back);  // Move back a little
                    _delay_ms(100);
                    move(stop);  // Stop after moving back

                    if (distanceleft > distanceright) {
                        move(left);  // Turn left
                        _delay_ms(100);
                        move(stop);  // Stop after turning
                        break;

                    } else if (distanceright > distanceleft) {
                        move(right);  // Turn right
                        _delay_ms(100);
                        move(stop);  // Stop after turning
                        DIO_u8GetPinValue(PORTD, PIN_2, &value);  // Optional pin read (can be removed if unnecessary)
                        break;
                    }

                } else {
                    setServoDuty(forward_servo);  // Reset servo forward
                    move(back);  // Move back
                    _delay_ms(100);
                    move(stop);  // Stop after moving back
                }
            }
        }
    }

    return 0;
}
