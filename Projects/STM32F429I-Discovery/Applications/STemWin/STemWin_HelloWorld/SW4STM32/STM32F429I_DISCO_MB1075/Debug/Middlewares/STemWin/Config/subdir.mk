################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/GUIConf.c \
/home/johannes/workspace/mz_ecu_stmcube/Middlewares/ST/STemWin/OS/GUI_X.c \
/home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/LCDConf_stm32f429i_disco_MB1075.c 

OBJS += \
./Middlewares/STemWin/Config/GUIConf.o \
./Middlewares/STemWin/Config/GUI_X.o \
./Middlewares/STemWin/Config/LCDConf_stm32f429i_disco_MB1075.o 

C_DEPS += \
./Middlewares/STemWin/Config/GUIConf.d \
./Middlewares/STemWin/Config/GUI_X.d \
./Middlewares/STemWin/Config/LCDConf_stm32f429i_disco_MB1075.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/STemWin/Config/GUIConf.o: /home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/GUIConf.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/CMSIS/Include" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/mz_ecu_stmcube/Middlewares/ST/STemWin/inc"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Middlewares/STemWin/Config/GUI_X.o: /home/johannes/workspace/mz_ecu_stmcube/Middlewares/ST/STemWin/OS/GUI_X.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/CMSIS/Include" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/mz_ecu_stmcube/Middlewares/ST/STemWin/inc"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Middlewares/STemWin/Config/LCDConf_stm32f429i_disco_MB1075.o: /home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/LCDConf_stm32f429i_disco_MB1075.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/mz_ecu_stmcube/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/CMSIS/Include" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/mz_ecu_stmcube/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/mz_ecu_stmcube/Middlewares/ST/STemWin/inc"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


