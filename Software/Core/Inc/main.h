/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32l0xx_hal.h"

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
#define BATTERY_VOLTAGE_Pin GPIO_PIN_0
#define BATTERY_VOLTAGE_GPIO_Port GPIOA
#define SENSE_CSS_Pin GPIO_PIN_1
#define SENSE_CSS_GPIO_Port GPIOA
#define DIO0_Pin GPIO_PIN_2
#define DIO0_GPIO_Port GPIOA
#define POWER_ENABLE_Pin GPIO_PIN_3
#define POWER_ENABLE_GPIO_Port GPIOA
#define WATER_METER_Pin GPIO_PIN_4
#define WATER_METER_GPIO_Port GPIOA
#define ANEMOMETER_Pin GPIO_PIN_5
#define ANEMOMETER_GPIO_Port GPIOA
#define WIND_VANE_Pin GPIO_PIN_6
#define WIND_VANE_GPIO_Port GPIOA
#define SOLAR_VOLTAGE_Pin GPIO_PIN_0
#define SOLAR_VOLTAGE_GPIO_Port GPIOB
#define ADC_IN9_Pin GPIO_PIN_1
#define ADC_IN9_GPIO_Port GPIOB
#define CUSTOM_03_Pin GPIO_PIN_12
#define CUSTOM_03_GPIO_Port GPIOB
#define CUSTOM_02_Pin GPIO_PIN_13
#define CUSTOM_02_GPIO_Port GPIOB
#define DIO5_Pin GPIO_PIN_14
#define DIO5_GPIO_Port GPIOB
#define CUSTOM_00_Pin GPIO_PIN_15
#define CUSTOM_00_GPIO_Port GPIOB
#define BME280_CS_Pin GPIO_PIN_10
#define BME280_CS_GPIO_Port GPIOA
#define DEBUG_LED_Pin GPIO_PIN_12
#define DEBUG_LED_GPIO_Port GPIOA
#define TIM22_CH1_Pin GPIO_PIN_4
#define TIM22_CH1_GPIO_Port GPIOB
#define INT_CSS_Pin GPIO_PIN_5
#define INT_CSS_GPIO_Port GPIOB
#define RESET_CSS_Pin GPIO_PIN_8
#define RESET_CSS_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
