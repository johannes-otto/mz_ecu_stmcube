/**
 ******************************************************************************
 * @file    STemWin/STemWin_HelloWorld/Src/main.c
 * @author  MCD Application Team
 * @version V1.3.2
 * @date    13-November-2015
 * @brief   This file provides main program functions
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2015 STMicroelectronics</center></h2>
 *
 * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at:
 *
 *        http://www.st.com/software_license_agreement_liberty_v2
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 ******************************************************************************
 */

#include "math.h"
#include "main.h"
#include "WM.h"
#include "stopwatch.h"
#include "gui_funs.h"

float offset;
float def_ign;
float h_mm;



WM_HWIN hWin_config;
WM_HWIN hWin_graph;
WM_HWIN hWin_start_screen;

int main(void) {
	HAL_Init();
	BSP_Config();
	SystemClock_Config();

	stopwatch_init(SystemCoreClock);

	GUI_Init();
	GUI_UC_SetEncodeUTF8();
	WM_SetDesktopColor(GUI_BLACK);
#if GUI_SUPPORT_MEMDEV
	WM_SetCreateFlags(WM_CF_MEMDEV);
#endif
	hWin_start_screen = CreateWindow_start_screen();

	GUI_Delay(2000);
	WM_DeleteWindow(hWin_start_screen);

	BackgroudTimerInit();
	HAL_TIM_Base_Stop_IT(&TimHandle);

	EXTILine0_Config();
	EXTILine2_Config();


	 h_mm = 58;
	set_offset_mm(8.3 * 10);
	set_def_ign_mm(3.0 * 10);
	set_ign_length(2000 / 100);

	set_b_1k(0);
	set_b_2k(0);
	set_b_3k(0);
	set_b_4k(0);
	set_b_5k(0);
	set_b_6k(0);
	set_b_7k(0);
	set_b_8k(0);
	set_b_9k(0);

	set_def_ign(def_ign);

	compute_angles();

	Ignition_Pin_Init();

	hWin_graph=CreateWindow_graph();


	while (1) {

		if (left_config()) {
			WM_DeleteWindow(hWin_graph);

			leave_config(0);
			compute_angles();
			set_def_ign(def_ign);


			BSP_LED_Off(LED3);
			WM_DeleteWindow(hWin_config);
			hWin_graph=CreateWindow_graph();
			HAL_TIM_Base_Stop_IT(&TimHandle);
			HAL_NVIC_EnableIRQ(EXTI2_IRQn);
			HAL_NVIC_EnableIRQ(EXTI0_IRQn);

		}
		GUI_Delay(10);
	}
}

void compute_angles() {
	float r_mm = h_mm / 2;
	offset = acosf((r_mm - get_offset_mm()) / r_mm) * 180 / M_PI;
	def_ign = acosf((r_mm - get_def_ign_mm()) / r_mm) * 180 / M_PI;
}
void ConfigMenu(void) {
	WM_DeleteWindow(hWin_graph);
	hWin_config = CreateWindow_config();

}

void disp_all_values(void) {
	GUI_Clear();
/*
	GUI_DispStringAt("offset_mm: ", 0, 0);
	GUI_DispFloat(offset_mm, 4);

	GUI_DispString("\ndef_ign_mm: ");
	GUI_DispFloat(def_ign_mm, 4);

	GUI_DispString("\nign_length: ");
	GUI_DispDecMin(ign_length);

	GUI_DispString("\n\nb_1k: ");
	GUI_DispDecMin(b_1k);
	GUI_DispString("\nb_2k: ");
	GUI_DispDecMin(b_2k);
	GUI_DispString("\nb_3k: ");
	GUI_DispDecMin(b_3k);
	GUI_DispString("\nb_4k: ");
	GUI_DispDecMin(b_4k);
	GUI_DispString("\nb_5k: ");
	GUI_DispDecMin(b_5k);
	GUI_DispString("\nb_6k: ");
	GUI_DispDecMin(b_6k);
	GUI_DispString("\nb_7k: ");
	GUI_DispDecMin(b_7k);
	GUI_DispString("\nb_8k: ");
	GUI_DispDecMin(b_8k);
	GUI_DispString("\nb_9k: ");
	GUI_DispDecMin(b_9k);

	GUI_DispStringAt("\n\noffset: ", 0, 0);
	GUI_DispFloat(offset, 4);
	GUI_DispString("\ndef_ign: ");
	GUI_DispFloat(def_ign, 4);
	*/
}

uint32_t compute_ign(uint32_t round_time) {
	uint32_t rpm = 60e6 / round_time;
	float delay = 0;

	if (rpm < 1000) {
		delay = get_b_1k();
	} else if (rpm < 2000) {
		delay = get_b_2k();
	} else if (rpm < 3000) {
		delay = get_b_3k();
	} else if (rpm < 4000) {
		delay = get_b_4k();
	} else if (rpm < 5000) {
		delay = get_b_4k();
	} else if (rpm < 6000) {
		delay = get_b_6k();
	} else if (rpm < 7000) {
		delay = get_b_7k();
	} else if (rpm < 8000) {
		delay = get_b_8k();
	} else if (rpm < 9000) {
		delay = get_b_9k();
	}

	return round_time * (offset - def_ign - delay) / 360;
}

void ignite() {
	//BSP_LED_On(LED4);
	uint32_t round_time = stopwatch_getus();
	stopwatch_reset();

	uint32_t ign_point = compute_ign(round_time);
	while (stopwatch_getus() < ign_point)
		;
	BSP_LED_On(LED3);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,GPIO_PIN_SET);
	while (stopwatch_getus() < ign_point + get_ign_length())
		;
	BSP_LED_Off(LED3);
	HAL_GPIO_WritePin(GPIOB,GPIO_PIN_2,GPIO_PIN_RESET);
	//BSP_LED_Off(LED4);
}

