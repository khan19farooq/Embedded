/**
  * @brief USART1 Initialization Function
  * @param None
  * @retval None
  */
#include "usart.h"
#include "main.h"

//UART_HandleTypeDef huart1; // Now use huart1

void MX_USART1_UART_Init(void)
{
  huart1.Instance = USART1;  // Set USART1 instance
  huart1.Init.BaudRate = 115200;
  huart1.Init.WordLength = UART_WORDLENGTH_8B;
  huart1.Init.StopBits = UART_STOPBITS_1;
  huart1.Init.Parity = UART_PARITY_NONE;
  huart1.Init.Mode = UART_MODE_TX_RX;
  huart1.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart1.Init.OverSampling = UART_OVERSAMPLING_16;
  
  if (HAL_UART_Init(&huart1) != HAL_OK)
  {
    Error_Handler();
  }
  
  // Enable the USART2 interrupt
  HAL_NVIC_SetPriority(USART1_IRQn, 0, 0);  // Set priority (adjust as needed)
  HAL_NVIC_EnableIRQ(USART1_IRQn);  // Enable the interrupt in NVIC
}


