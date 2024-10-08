/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
#include "main.h"
#include "basicApplication.h"
#include "system_config.h"
#include "gpio_config.h"
#include "usart.h"
#include "usbd_cdc_if.h"
#include <string.h>
#include <stdint.h>
#include "usb_device.h"
#include "ESP_DATA_HANDLER.h"
#include "UartRingbuffer.h"


int main(void)
{
  //uint8_t myBuffer[20] = "Hello World!!!\r\n";
  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* Configure the system clock */
  SystemClock_Config();

  MX_GPIO_Init();
  MX_USART1_UART_Init();
  MX_USB_DEVICE_Init();
  //UART_CommunicationSetup();
  ESP_Init("601 S Park Apt C", "fahrukh.khan666", "192.168.40.21");
  HAL_Delay(2000);  // Wait for 2 seconds

  while (1)
  {
    //CDC_Transmit_FS(myBuffer, strlen((char*)myBuffer));
    //HAL_Delay(500);
    //controlLedWithButton();
	  Server_Start();
  }

}
