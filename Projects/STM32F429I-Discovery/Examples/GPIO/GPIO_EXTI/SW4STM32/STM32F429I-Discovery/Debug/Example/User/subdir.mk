################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Examples/GPIO/GPIO_EXTI/Src/main.c \
/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Examples/GPIO/GPIO_EXTI/Src/stm32f4xx_it.c 

OBJS += \
./Example/User/main.o \
./Example/User/stm32f4xx_it.o 

C_DEPS += \
./Example/User/main.d \
./Example/User/stm32f4xx_it.d 


# Each subdirectory must supply rules for building sources it contributes
Example/User/main.o: /home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Examples/GPIO/GPIO_EXTI/Src/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DUSE_HAL_DRIVER -DSTM32F429xx -DUSE_STM32F429I_DISCO -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Examples/GPIO/GPIO_EXTI/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Example/User/stm32f4xx_it.o: /home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Examples/GPIO/GPIO_EXTI/Src/stm32f4xx_it.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DUSE_HAL_DRIVER -DSTM32F429xx -DUSE_STM32F429I_DISCO -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Examples/GPIO/GPIO_EXTI/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


