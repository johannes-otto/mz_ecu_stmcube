/**
  ******************************************************************************
  * @file    main.h 
  * @author  MCD Application Team
  * @version V1.3.2
  * @date    13-November-2015
  * @brief   Header for main.c module
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

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "GUI.h"
#include "DIALOG.h"

#include "stm32f429i_discovery.h"
#include "stm32f429i_discovery_ts.h"
#include "stm32f429i_discovery_sdram.h"
#include "../Components/ili9341/ili9341.h" 


extern void BSP_Config(void);
extern void SystemClock_Config(void);
void BSP_Pointer_Update(void);
void BSP_Background(void);
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
extern void ignite(void);
extern void MainTask(void);
extern TIM_HandleTypeDef TimHandle;
void ConfigMenu(void);
void BackgroudTimerInit(void);
void compute_angles(void);
void disp_all_values(void);

extern void EXTILine0_Config(void);
extern void EXTILine2_Config(void);

//extern WM_HWIN CreateWindow_graph(void);
extern WM_HWIN CreateWindow_graph(void);
extern WM_HWIN CreateWindow_config(void);
extern WM_HWIN CreateWindow_start_screen(void);

extern void _cbDialog_config_global(WM_MESSAGE * pMsg);
GUI_WIDGET_CREATE_INFO _aDialogCreate_config_global[10];

extern void _cbDialog_config_low(WM_MESSAGE * pMsg);
GUI_WIDGET_CREATE_INFO _aDialogCreate_config_low[10];

extern void _cbDialog_config_mid(WM_MESSAGE * pMsg);
GUI_WIDGET_CREATE_INFO _aDialogCreate_config_mid[10];

extern void _cbDialog_config_high(WM_MESSAGE * pMsg);
GUI_WIDGET_CREATE_INFO _aDialogCreate_config_high[10];

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
extern void set_def_ign(float di);
#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
