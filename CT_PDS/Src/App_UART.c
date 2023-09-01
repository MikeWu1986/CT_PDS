/**
  ******************************************************************************
  * @file    Src/App_UART.c
  * @author  WuYi
  * @brief   UART task.
  ******************************************************************************
**/

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
uint8_t TxMessage[8];
uint8_t *p = TxMessage;
uint8_t RxMessage[8];
uint8_t u8RxCount = 0;
uint16_t u16PollTime = 0;
uint8_t u8ReveiveValid = 0;
/* Private function prototypes -----------------------------------------------*/

void App_UART(void);
void Task_PowerMessage(void);
void Task_FaultMessage(void);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief UART application
  *        This function sends messages about the power
	*		     10ms every time
  * @param None
  * @retval None
  */
void App_UART(void)
{
	Task_FaultMessage();
	u16PollTime++;
	if(u16PollTime >= 20)
	{
		u16PollTime = 0;
	}
	
	if(u16PollTime == 10 || u16PollTime == 0)
		if(u8ReveiveValid)
		{
			u8ReveiveValid = FALSE;
			Task_PowerMessage();
		}

}

/**
  * @brief This function calls the HAL Library to transmit
	*		     10ms every time
  * @param None
  * @retval None
  */
void Task_PowerMessage()
{
	uint8_t i = 0;
	for(i = 0; i < 8; i++)
	{
		TxMessage[i] = RxMessage[i];
	}
	HAL_UART_Transmit(&UartHandle, p, 8, 1000);
}

/**
  * @brief This function fills the Tx message
	*		     10ms every time
  * @param None
  * @retval None
  */
void Task_FaultMessage()
{
	TxMessage[0] = 0x00;
	TxMessage[1] = 0x00;
	TxMessage[2] = 0x00;
	TxMessage[3] = MySlaveIndex6013_DeviceStatusDelayTime.Output2DelayTime & 0xFF;
	TxMessage[4] = MySlaveIndex6013_DeviceStatusDelayTime.Output3DelayTime >> 24 & 0xFF;
	TxMessage[5] = MySlaveIndex6013_DeviceStatusDelayTime.Output3DelayTime >> 16 & 0xFF;
	TxMessage[6] = MySlaveIndex6013_DeviceStatusDelayTime.Output3DelayTime >> 8 & 0xFF;
	TxMessage[7] = MySlaveIndex6013_DeviceStatusDelayTime.Output3DelayTime & 0xFF;
	HAL_UART_Transmit(&UartHandle, p, 8, 1000);
}







/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
