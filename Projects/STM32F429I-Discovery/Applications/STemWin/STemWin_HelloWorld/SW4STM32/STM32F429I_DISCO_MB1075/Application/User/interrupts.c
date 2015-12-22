#include "main.h"


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) {
	if (htim->Instance == TimHandle.Instance) {
		BSP_Background();
	}
}

void BSP_Config(void) {
	BSP_LED_Init(LED3);
	BSP_LED_Off(LED3);
	BSP_LED_Init(LED4);
	BSP_SDRAM_Init();
	BSP_TS_Init(240, 320);
	__HAL_RCC_CRC_CLK_ENABLE()
	;
}

void BSP_Background(void) {
	BSP_Pointer_Update();
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {

	if (GPIO_Pin == KEY_BUTTON_PIN) {
		HAL_NVIC_DisableIRQ(EXTI0_IRQn);
		HAL_NVIC_DisableIRQ(EXTI2_IRQn);
		BSP_LED_On(LED3);
		HAL_TIM_Base_Start_IT(&TimHandle);
		ConfigMenu();
	} else if (GPIO_Pin == GPIO_PIN_2) {
		ignite();
	}
}

void BSP_Pointer_Update(void) {
	GUI_PID_STATE TS_State;
	static TS_StateTypeDef prev_state;
	TS_StateTypeDef ts;
	uint16_t xDiff, yDiff;

	BSP_TS_GetState(&ts);

	TS_State.Pressed = ts.TouchDetected;

	xDiff = (prev_state.X > ts.X) ?
			(prev_state.X - ts.X) : (ts.X - prev_state.X);
	yDiff = (prev_state.Y > ts.Y) ?
			(prev_state.Y - ts.Y) : (ts.Y - prev_state.Y);

	if ((prev_state.TouchDetected != ts.TouchDetected) || (xDiff > 3)
			|| (yDiff > 3)) {
		prev_state.TouchDetected = ts.TouchDetected;

		if ((ts.X != 0) && (ts.Y != 0)) {
			prev_state.X = ts.X;
			prev_state.Y = ts.Y;
		}

		TS_State.Layer = 0;
		TS_State.x = prev_state.X;
		TS_State.y = prev_state.Y;

		GUI_TOUCH_StoreStateEx(&TS_State);
	}
}

