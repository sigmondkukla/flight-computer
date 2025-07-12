/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LORA_NRST_Pin GPIO_PIN_13
#define LORA_NRST_GPIO_Port GPIOC
#define LORA_BUSY_Pin GPIO_PIN_14
#define LORA_BUSY_GPIO_Port GPIOC
#define LORA_DIO1_Pin GPIO_PIN_15
#define LORA_DIO1_GPIO_Port GPIOC
#define PYRO1_CONT_Pin GPIO_PIN_0
#define PYRO1_CONT_GPIO_Port GPIOC
#define PYRO1_GATE_Pin GPIO_PIN_1
#define PYRO1_GATE_GPIO_Port GPIOC
#define PYRO2_CONT_Pin GPIO_PIN_2
#define PYRO2_CONT_GPIO_Port GPIOC
#define PYRO2_GATE_Pin GPIO_PIN_3
#define PYRO2_GATE_GPIO_Port GPIOC
#define BATT_SENSE_Pin GPIO_PIN_0
#define BATT_SENSE_GPIO_Port GPIOA
#define GPS_RESET_Pin GPIO_PIN_1
#define GPS_RESET_GPIO_Port GPIOA
#define MAG_CS_Pin GPIO_PIN_4
#define MAG_CS_GPIO_Port GPIOA
#define MAG_INT_Pin GPIO_PIN_6
#define MAG_INT_GPIO_Port GPIOA
#define IMU_CS_Pin GPIO_PIN_4
#define IMU_CS_GPIO_Port GPIOC
#define IMU_INT_Pin GPIO_PIN_5
#define IMU_INT_GPIO_Port GPIOC
#define BARO_CS_Pin GPIO_PIN_0
#define BARO_CS_GPIO_Port GPIOB
#define BARO_INT_Pin GPIO_PIN_1
#define BARO_INT_GPIO_Port GPIOB
#define FLASH_CS_Pin GPIO_PIN_2
#define FLASH_CS_GPIO_Port GPIOB
#define SD_CS_Pin GPIO_PIN_10
#define SD_CS_GPIO_Port GPIOB
#define SD_DETECT_Pin GPIO_PIN_12
#define SD_DETECT_GPIO_Port GPIOB
#define PWR_STATUS_Pin GPIO_PIN_8
#define PWR_STATUS_GPIO_Port GPIOA
#define USER_BUTTON_Pin GPIO_PIN_10
#define USER_BUTTON_GPIO_Port GPIOA
#define GPS_TIMEPULSE_Pin GPIO_PIN_15
#define GPS_TIMEPULSE_GPIO_Port GPIOA
#define GPS_EXTINT_Pin GPIO_PIN_11
#define GPS_EXTINT_GPIO_Port GPIOC
#define LORA_RF_SW1_Pin GPIO_PIN_12
#define LORA_RF_SW1_GPIO_Port GPIOC
#define LORA_NSS_Pin GPIO_PIN_2
#define LORA_NSS_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
