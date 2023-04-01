/*
 * app_main.c
 *
 *  Created on: Mar 31, 2023
 *      Author: Wels
 */
#include "app_main.h"

void app_main(void)
{
	HAL_GPIO_TogglePin(LD1_GPIO_Port, LD1_Pin);
	HAL_GPIO_TogglePin(LD1_GPIO_Port, LD2_Pin);
	HAL_Delay(250);
}

