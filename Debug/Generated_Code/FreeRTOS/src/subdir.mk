################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/FreeRTOS/src/croutine.c \
../Generated_Code/FreeRTOS/src/event_groups.c \
../Generated_Code/FreeRTOS/src/heap_1.c \
../Generated_Code/FreeRTOS/src/heap_2.c \
../Generated_Code/FreeRTOS/src/heap_3.c \
../Generated_Code/FreeRTOS/src/heap_4.c \
../Generated_Code/FreeRTOS/src/heap_5.c \
../Generated_Code/FreeRTOS/src/list.c \
../Generated_Code/FreeRTOS/src/queue.c \
../Generated_Code/FreeRTOS/src/tasks.c \
../Generated_Code/FreeRTOS/src/timers.c 

OBJS += \
./Generated_Code/FreeRTOS/src/croutine.o \
./Generated_Code/FreeRTOS/src/event_groups.o \
./Generated_Code/FreeRTOS/src/heap_1.o \
./Generated_Code/FreeRTOS/src/heap_2.o \
./Generated_Code/FreeRTOS/src/heap_3.o \
./Generated_Code/FreeRTOS/src/heap_4.o \
./Generated_Code/FreeRTOS/src/heap_5.o \
./Generated_Code/FreeRTOS/src/list.o \
./Generated_Code/FreeRTOS/src/queue.o \
./Generated_Code/FreeRTOS/src/tasks.o \
./Generated_Code/FreeRTOS/src/timers.o 

C_DEPS += \
./Generated_Code/FreeRTOS/src/croutine.d \
./Generated_Code/FreeRTOS/src/event_groups.d \
./Generated_Code/FreeRTOS/src/heap_1.d \
./Generated_Code/FreeRTOS/src/heap_2.d \
./Generated_Code/FreeRTOS/src/heap_3.d \
./Generated_Code/FreeRTOS/src/heap_4.d \
./Generated_Code/FreeRTOS/src/heap_5.d \
./Generated_Code/FreeRTOS/src/list.d \
./Generated_Code/FreeRTOS/src/queue.d \
./Generated_Code/FreeRTOS/src/tasks.d \
./Generated_Code/FreeRTOS/src/timers.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/FreeRTOS/src/%.o: ../Generated_Code/FreeRTOS/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"CPU_MK22FN512VLH12" -DPEX_USE_RTOS -DFSL_RTOS_FREE_RTOS -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/osa/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/src/sim/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/src/clock/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/startup" -I"Z:/WZ/Kinetis_Projects/CB_Test/Generated_Code/SDK/platform/startup/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/Sources" -I"Z:/WZ/Kinetis_Projects/CB_Test/Generated_Code" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/drivers/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/src" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


