################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../SDK/platform/startup/MK22F51212/gcc/startup_MK22F51212.S 

OBJS += \
./SDK/platform/startup/MK22F51212/gcc/startup_MK22F51212.o 

S_UPPER_DEPS += \
./SDK/platform/startup/MK22F51212/gcc/startup_MK22F51212.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/startup/MK22F51212/gcc/%.o: ../SDK/platform/startup/MK22F51212/gcc/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


