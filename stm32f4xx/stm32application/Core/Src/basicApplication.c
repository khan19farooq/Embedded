#include "basicApplication.h"
#include <stdbool.h>
#include <gpio_config.h>

// Declare the control flags (they should not be marked as `extern` here).
bool userButtonON = false;

void externalLedControlWithButton(void)
{
    // Read the state of the user button (connected to GPIOA Pin 0)
    userButtonON = (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET);

    // Check if the user button is pressed
    if (userButtonON)
    {
        // Turn on the external LED (connected to GPIOC Pin 2)
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_SET);
    }
    else
    {
        // Turn off the external LED (connected to GPIOC Pin 2)
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, GPIO_PIN_RESET);
    }
}
