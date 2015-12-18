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
uint8_t GUI_Initialized = 0;

float offset;
float def_ign;

float offset_mm = 6.0;
float def_ign_mm = 3.0;
float h_mm = 58;

float b_1k = 1;
float b_2k = 2;
float b_3k = 3;
float b_4k = 4;
float b_5k = 5;
float b_6k = 6;
float b_7k = 7;
float b_8k = 8;
float b_9k = 9;

uint32_t ign_length = 2000;

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

	//GUI_SetOrientation(GUI_SWAP_XY | GUI_MIRROR_Y);
	hWin_start_screen = CreateWindow_start_screen();
	GUI_Delay(2000);
	WM_DeleteWindow(hWin_start_screen);

	BackgroudTimerInit();

	EXTILine0_Config();
	EXTILine2_Config();

	set_offset_mm(offset_mm * 10);
	set_def_ign_mm(def_ign_mm * 10);
	set_ign_length(ign_length / 100);

	set_b_1k(b_1k);
	set_b_2k(b_2k);
	set_b_3k(b_3k);
	set_b_4k(b_4k);
	set_b_5k(b_5k);
	set_b_6k(b_6k);
	set_b_7k(b_7k);
	set_b_8k(b_8k);
	set_b_9k(b_9k);

	compute_angles();

	set_def_ign(def_ign);

	hWin_graph=CreateWindow_graph();

	while (1) {

		if (left_config()) {
			WM_DeleteWindow(hWin_graph);

			leave_config(0);
			offset_mm = get_offset_mm();
			def_ign_mm = get_def_ign_mm();
			ign_length = get_ign_length();
			compute_angles();
			set_def_ign(def_ign);

			b_1k = get_b_1k();
			b_2k = get_b_2k();
			b_3k = get_b_3k();
			b_4k = get_b_4k();
			b_5k = get_b_5k();
			b_6k = get_b_6k();
			b_7k = get_b_7k();
			b_8k = get_b_8k();
			b_9k = get_b_9k();

			BSP_LED_Off(LED3);
			WM_DeleteWindow(hWin_config);
			hWin_graph=CreateWindow_graph();
			HAL_NVIC_EnableIRQ(EXTI2_IRQn);
			HAL_NVIC_EnableIRQ(EXTI0_IRQn);

		}
		GUI_Delay(10);
	}
}

void compute_angles() {
	float r_mm = h_mm / 2;
	offset = acosf((r_mm - offset_mm) / r_mm) * 180 / M_PI;
	def_ign = acosf((r_mm - def_ign_mm) / r_mm) * 180 / M_PI;
}
void ConfigMenu(void) {
	WM_DeleteWindow(hWin_graph);
	hWin_config = CreateWindow_config();
	//HAL_NVIC_EnableIRQ(EXTI0_IRQn);

}

void disp_all_values(void) {
	GUI_Clear();

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
}

uint32_t compute_ign(uint32_t round_time) {
	uint32_t rpm = 60e6 / round_time;
	float delay = 0;

	if (rpm < 1000) {
		delay = b_1k;
	} else if (rpm < 2000) {
		delay = b_2k;
	} else if (rpm < 3000) {
		delay = b_3k;
	} else if (rpm < 4000) {
		delay = b_4k;
	} else if (rpm < 5000) {
		delay = b_5k;
	} else if (rpm < 6000) {
		delay = b_6k;
	} else if (rpm < 7000) {
		delay = b_7k;
	} else if (rpm < 8000) {
		delay = b_8k;
	} else if (rpm < 9000) {
		delay = b_9k;
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
	while (stopwatch_getus() < ign_point + ign_length)
		;
	BSP_LED_Off(LED3);
	//BSP_LED_Off(LED4);
}

