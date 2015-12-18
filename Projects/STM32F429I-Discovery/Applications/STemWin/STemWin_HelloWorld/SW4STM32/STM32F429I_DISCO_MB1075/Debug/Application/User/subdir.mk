################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/User/config_menu_global.c \
../Application/User/config_menu_high.c \
../Application/User/config_menu_low.c \
../Application/User/config_menu_main.c \
../Application/User/config_menu_mid.c \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/BASIC_HelloWorld.c \
../Application/User/init_funs.c \
../Application/User/interrupts.c \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/main.c \
../Application/User/simple_graph.c \
../Application/User/start_screen.c \
../Application/User/start_screen_high.c \
/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/stm32f4xx_it.c \
../Application/User/stopwatch.c 

OBJS += \
./Application/User/config_menu_global.o \
./Application/User/config_menu_high.o \
./Application/User/config_menu_low.o \
./Application/User/config_menu_main.o \
./Application/User/config_menu_mid.o \
./Application/User/BASIC_HelloWorld.o \
./Application/User/init_funs.o \
./Application/User/interrupts.o \
./Application/User/main.o \
./Application/User/simple_graph.o \
./Application/User/start_screen.o \
./Application/User/start_screen_high.o \
./Application/User/stm32f4xx_it.o \
./Application/User/stopwatch.o 

C_DEPS += \
./Application/User/config_menu_global.d \
./Application/User/config_menu_high.d \
./Application/User/config_menu_low.d \
./Application/User/config_menu_main.d \
./Application/User/config_menu_mid.d \
./Application/User/gui_funs.d \
./Application/User/init_funs.d \
./Application/User/interrupts.d \
./Application/User/main.d \
./Application/User/simple_graph.d \
./Application/User/start_screen.d \
./Application/User/start_screen_high.d \
./Application/User/stm32f4xx_it.d \
./Application/User/stopwatch.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/%.o: ../Application/User/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/User/BASIC_HelloWorld.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/BASIC_HelloWorld.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/User/main.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Application/User/stm32f4xx_it.o: /home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Src/stm32f4xx_it.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -DSTM32F429xx -DUSE_STM32F429I_DISCO -DARM_MATH_CM4=1 -D__errno -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Projects/STM32F429I-Discovery/Applications/STemWin/STemWin_HelloWorld/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Device/ST/STM32F4xx/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/CMSIS/Include" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/STM32F4xx_HAL_Driver/Inc" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Drivers/BSP/STM32F429I-Discovery" -I"/home/johannes/workspace/STM32Cube_FW_F4_V1.10.0/Middlewares/ST/STemWin/inc"  -Os -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -Wno-unused-variable -Wno-pointer-sign -Wno-main -Wno-format -Wno-address -Wno-unused-but-set-variable -Wno-strict-aliasing -Wno-parentheses -Wno-missing-braces -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


