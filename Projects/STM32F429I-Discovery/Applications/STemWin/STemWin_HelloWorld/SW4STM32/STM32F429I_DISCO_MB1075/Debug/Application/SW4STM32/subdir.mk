################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
/home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/SW4STM32/startup_stm32f429xx.s 

OBJS += \
./Application/SW4STM32/startup_stm32f429xx.o 


# Each subdirectory must supply rules for building sources it contributes
Application/SW4STM32/startup_stm32f429xx.o: /home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/SW4STM32/startup_stm32f429xx.s
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Assembler'
	@echo $(PWD)
	arm-none-eabi-as -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -IROJ_DIR$/../Inc -g -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


