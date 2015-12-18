################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/Components/ili9341/ili9341.c \
/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/Components/stmpe811/stmpe811.c 

OBJS += \
./Drivers/BSP/Components/ili9341.o \
./Drivers/BSP/Components/stmpe811.o 

C_DEPS += \
./Drivers/BSP/Components/ili9341.d \
./Drivers/BSP/Components/stmpe811.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/Components/ili9341.o: /home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/Components/ili9341/ili9341.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_SampleDemo/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_SampleDemo/Demo" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/BSP/Components/stmpe811.o: /home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/Components/stmpe811/stmpe811.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_SampleDemo/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_SampleDemo/Demo" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/Downloads/stm32cubef4/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


