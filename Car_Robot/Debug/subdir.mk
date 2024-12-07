################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DIO_PRG.c \
../EXTI_PRG.c \
../GLOPAL_PRG.c \
../TIMER_program.c \
../ULTRA_PRG.c \
../main.c \
../metal_sens.c \
../motion.c \
../servo.c 

OBJS += \
./DIO_PRG.o \
./EXTI_PRG.o \
./GLOPAL_PRG.o \
./TIMER_program.o \
./ULTRA_PRG.o \
./main.o \
./metal_sens.o \
./motion.o \
./servo.o 

C_DEPS += \
./DIO_PRG.d \
./EXTI_PRG.d \
./GLOPAL_PRG.d \
./TIMER_program.d \
./ULTRA_PRG.d \
./main.d \
./metal_sens.d \
./motion.d \
./servo.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


