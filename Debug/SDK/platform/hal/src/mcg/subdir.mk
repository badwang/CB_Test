################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/hal/src/mcg/fsl_mcg_hal.c \
../SDK/platform/hal/src/mcg/fsl_mcg_hal_modes.c 

OBJS += \
./SDK/platform/hal/src/mcg/fsl_mcg_hal.o \
./SDK/platform/hal/src/mcg/fsl_mcg_hal_modes.o 

C_DEPS += \
./SDK/platform/hal/src/mcg/fsl_mcg_hal.d \
./SDK/platform/hal/src/mcg/fsl_mcg_hal_modes.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/hal/src/mcg/%.o: ../SDK/platform/hal/src/mcg/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"CPU_MK22FN512VLH12" -DPEX_USE_RTOS -DFSL_RTOS_FREE_RTOS -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/inc" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/inc" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/osa/inc" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/src/sim/MK22F51212" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/src/clock/MK22F51212" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device/MK22F51212" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/startup" -I"D:/WZ/Kinetis_Projects/CB_Test/Generated_Code/SDK/platform/startup/MK22F51212" -I"D:/WZ/Kinetis_Projects/CB_Test/Sources" -I"D:/WZ/Kinetis_Projects/CB_Test/Generated_Code" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/drivers/inc" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/src" -I"D:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


