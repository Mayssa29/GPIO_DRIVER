/**
  ******************************************************************************
  * @file    main.c
  * @author  Mouadh Dahech
  * @brief   Memory management 
  * @version V1.0.0
  * @date    16-10-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/

#include "GPIO.h"


/* Private function prototypes -----------------------------------------------*/

/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
 int main(void)
{
  GPIO_Clock_Enable(GPIOD);
  GPIO_Config(GPIOD,PIN12,OUTPUT,OUTPUT_PUSH_PULL);
  while(1)
  {
  } 

}

/**************************************END OF FILE**************************************/
