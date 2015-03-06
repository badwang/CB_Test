################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/ADC0.c \
../Generated_Code/CS1.c \
../Generated_Code/Cpu.c \
../Generated_Code/DbgCs1.c \
../Generated_Code/FreeRTOS1.c \
../Generated_Code/KSDK1.c \
../Generated_Code/Timer1.c \
../Generated_Code/UTIL1.c \
../Generated_Code/WAIT1.c \
../Generated_Code/croutine.c \
../Generated_Code/event_groups.c \
../Generated_Code/gpio.c \
../Generated_Code/heap_1.c \
../Generated_Code/heap_2.c \
../Generated_Code/heap_3.c \
../Generated_Code/heap_4.c \
../Generated_Code/heap_5.c \
../Generated_Code/list.c \
../Generated_Code/osa1.c \
../Generated_Code/port.c \
../Generated_Code/queue.c \
../Generated_Code/tasks.c \
../Generated_Code/timers.c 

OBJS += \
./Generated_Code/ADC0.o \
./Generated_Code/CS1.o \
./Generated_Code/Cpu.o \
./Generated_Code/DbgCs1.o \
./Generated_Code/FreeRTOS1.o \
./Generated_Code/KSDK1.o \
./Generated_Code/Timer1.o \
./Generated_Code/UTIL1.o \
./Generated_Code/WAIT1.o \
./Generated_Code/croutine.o \
./Generated_Code/event_groups.o \
./Generated_Code/gpio.o \
./Generated_Code/heap_1.o \
./Generated_Code/heap_2.o \
./Generated_Code/heap_3.o \
./Generated_Code/heap_4.o \
./Generated_Code/heap_5.o \
./Generated_Code/list.o \
./Generated_Code/osa1.o \
./Generated_Code/port.o \
./Generated_Code/queue.o \
./Generated_Code/tasks.o \
./Generated_Code/timers.o 

C_DEPS += \
./Generated_Code/ADC0.d \
./Generated_Code/CS1.d \
./Generated_Code/Cpu.d \
./Generated_Code/DbgCs1.d \
./Generated_Code/FreeRTOS1.d \
./Generated_Code/KSDK1.d \
./Generated_Code/Timer1.d \
./Generated_Code/UTIL1.d \
./Generated_Code/WAIT1.d \
./Generated_Code/croutine.d \
./Generated_Code/event_groups.d \
./Generated_Code/gpio.d \
./Generated_Code/heap_1.d \
./Generated_Code/heap_2.d \
./Generated_Code/heap_3.d \
./Generated_Code/heap_4.d \
./Generated_Code/heap_5.d \
./Generated_Code/list.d \
./Generated_Code/osa1.d \
./Generated_Code/port.d \
./Generated_Code/queue.d \
./Generated_Code/tasks.d \
./Generated_Code/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"CPU_MK22FN512VLH12" -DPEX_USE_RTOS -DFSL_RTOS_FREE_RTOS -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/osa/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/src/sim/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/src/clock/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/startup" -I"Z:/WZ/Kinetis_Projects/CB_Test/Generated_Code/SDK/platform/startup/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/Sources" -I"Z:/WZ/Kinetis_Projects/CB_Test/Generated_Code" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/drivers/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/src" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


