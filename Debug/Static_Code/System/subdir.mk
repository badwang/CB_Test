################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Static_Code/System/PE_low_level_init.c 

OBJS += \
./Static_Code/System/PE_low_level_init.o 

C_DEPS += \
./Static_Code/System/PE_low_level_init.d 


# Each subdirectory must supply rules for building sources it contributes
Static_Code/System/%.o: ../Static_Code/System/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"CPU_MK22FN512VLH12" -DPEX_USE_RTOS -DFSL_RTOS_FREE_RTOS -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/osa/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/hal/src/sim/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/system/src/clock/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/CMSIS/Include/device/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/startup" -I"Z:/WZ/Kinetis_Projects/CB_Test/Generated_Code/SDK/platform/startup/MK22F51212" -I"Z:/WZ/Kinetis_Projects/CB_Test/Sources" -I"Z:/WZ/Kinetis_Projects/CB_Test/Generated_Code" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/drivers/inc" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/src" -I"Z:/WZ/Kinetis_Projects/CB_Test/SDK/platform/utilities/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


