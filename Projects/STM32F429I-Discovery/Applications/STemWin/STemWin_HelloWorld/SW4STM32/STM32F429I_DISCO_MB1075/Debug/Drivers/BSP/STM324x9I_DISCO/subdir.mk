################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.c \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_io.c \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.c \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.c \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_ts.c 

OBJS += \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery.o \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_io.o \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_lcd.o \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_sdram.o \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_ts.o 

C_DEPS += \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery.d \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_io.d \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_lcd.d \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_sdram.d \
./Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_ts.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_io.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_io.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_lcd.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_lcd.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_sdram.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_sdram.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Drivers/BSP/STM324x9I_DISCO/stm32f429i_discovery_ts.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery/stm32f429i_discovery_ts.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


