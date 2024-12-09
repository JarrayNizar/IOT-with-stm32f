/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */
//void ESP8266_Init (void);
//void ESP8266_SendServer (void);
//char * ESP8266_SendCommand (uint8_t * command, char * moduleResponse);
//void ESP8266_Connect_To_WiFi (uint8_t * wifi_name, uint8_t * password);
//char * CheckForResponse (uint8_t * command, char * tmprep);
//void ESP8266_Receive (void);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_0
#define B1_GPIO_Port GPIOA
#define B1_EXTI_IRQn EXTI0_IRQn
#define LD4_Pin GPIO_PIN_12
#define LD4_GPIO_Port GPIOD
#define LD3_Pin GPIO_PIN_13
#define LD3_GPIO_Port GPIOD
#define LD5_Pin GPIO_PIN_14
#define LD5_GPIO_Port GPIOD
#define LD6_Pin GPIO_PIN_15
#define LD6_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */
#define WIFI_NAME            "Network"    /*WiFi name*/
#define WIFI_PASSWORD        "Network1234."    /*WiFi password*/

#define WIFI_DISCONNECTED    "WIFI DISCONNECT\r\n"
#define WIFI_CONNECTED       "WIFI CONNECTED\r\n"
#define WIFI_GOT_IP          "WIFI GOT IP\r\n"

#define  __AT                "AT\r\n"                                         /*Test the module response*/
#define  __RST               "AT+RST\r\n"                                     /*Reset the module*/
#define  __CWMODE            "AT+CWMODE=1\r\n"                                /*This command is used to set the WiFi Mode of */
																			  /*operation as either Station mode, Soft Access */

#define  __SERVER_IP_WRITE   "GET https://api.thingspeak.com/update?api_key=MSOM1VQHZM3LXE60" /*&field2=70"*/
#define  __CIPSTART          "AT+CIPSTART=\"TCP\",\"184.106.153.149\",80\r\n" /*This command is used to establish one */
                                                                              /*of the three connections: TCP, UDP */

#define __CWMODE_SERVER      "AT+CWMODE=1\r\n"
#define __CIFSR              "AT+CIFSR\r\n"                                   /*Returns the ip address of the ESP8266*/
#define __CIPMUUX            "AT+CIPMUX=1\r\n"                                /*Allow multiple connections*/
#define __CIPSERVER          "AT+CIPSERVER=1,80\r\n"                          /*AT+CIPSERVER*/
#define  __CIPCLOSE          "AT+CIPCLOSE\r\n"                                /*To close the opened connection*/

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
