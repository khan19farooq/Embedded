/*
 * assert_failed.c
 *
 *  Created on: Sep 25, 2024
 *      Author: fahru
 */

#include "assert_failed.h"
#ifdef USE_FULL_ASSERT

void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  // Report the error (you can add custom implementation here)
  // printf("Wrong parameters value: file %s on line %d\r\n", file, line);
  /* USER CODE END 6 */
}

#endif /* USE_FULL_ASSERT */

