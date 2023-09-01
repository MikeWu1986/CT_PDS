/**
  ******************************************************************************
  * @file    CAN/CAN_Networking/Inc/main.h
  * @author  MCD Application Team
  * @brief   Header for main.c module
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2017 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __APP_GPIO_H
#define __APP_GPIO_H

/* Includes ------------------------------------------------------------------*/
#include <stdint.h>


#define CLOSE_K9_RELAY		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_5,GPIO_PIN_SET)	
#define OPEN_K9_RELAY			HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_5,GPIO_PIN_RESET)

#define CLOSE_K3_RELAY		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_11,GPIO_PIN_SET)	
#define OPEN_K3_RELAY			HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_11,GPIO_PIN_RESET)

#define CLOSE_K5_RELAY		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_2,GPIO_PIN_SET)	
#define OPEN_K5_RELAY			HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_2,GPIO_PIN_RESET)

#define CLOSE_K6_RELAY		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_3,GPIO_PIN_SET)	
#define OPEN_K6_RELAY			HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_3,GPIO_PIN_RESET)

#define CLOSE_K7_RELAY		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_4,GPIO_PIN_SET)	
#define OPEN_K7_RELAY			HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_4,GPIO_PIN_RESET)

#define CLOSE_K10_RELAY		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_6,GPIO_PIN_SET)	
#define OPEN_K10_RELAY		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_6,GPIO_PIN_RESET)

#define ME_BOX_K3_CTR_ON		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_1,GPIO_PIN_SET)	
#define ME_BOX_K3_CTR_OFF		HAL_GPIO_WritePin(GPIOJ, GPIO_PIN_1,GPIO_PIN_RESET)

#define ENABLE_K2_RELAY		do\
													{CLOSE_K3_RELAY;\
													CLOSE_K6_RELAY;\
													}\
													while(0)
														
#define DISABLE_K2_RELAY	do\
													{OPEN_K3_RELAY;\
													OPEN_K6_RELAY;\
													}\
													while(0)
														
#define ENABLE_K3_RELAY		do\
													{CLOSE_K5_RELAY;\
													CLOSE_K7_RELAY;\
													CLOSE_K9_RELAY;\
													CLOSE_K10_RELAY;\
													}\
													while(0)
														
#define DISABLE_K3_RELAY	do\
													{OPEN_K5_RELAY;\
													OPEN_K7_RELAY;\
													OPEN_K9_RELAY;\
													OPEN_K10_RELAY;\
													}\
													while(0)
														
#define ENABLE_D850					HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10,GPIO_PIN_SET)	
#define DISENABLE_D850			HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10,GPIO_PIN_RESET)
																
#define PIN_OCP_24V				GPIO_PIN_12				
#define PIN_OCP_AC11			GPIO_PIN_4		
#define PIN_OCP_AC12				GPIO_PIN_7			
#define PIN_OCP_AC22			GPIO_PIN_5	
#define PIN_OCP_AC13				GPIO_PIN_2				
#define PIN_OCP_AC21			GPIO_PIN_3		
#define PIN_OCP_AC23			GPIO_PIN_0												

#define STATUS_OCP_24V		HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_12)
#define STATUS_OCP_AC11		HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_4)
#define STATUS_OCP_AC12		HAL_GPIO_ReadPin(GPIOG, GPIO_PIN_7)
#define STATUS_OCP_AC22		HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_5)
#define STATUS_OCP_AC13		HAL_GPIO_ReadPin(GPIOK, GPIO_PIN_2)
#define STATUS_OCP_AC21		HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_3)
#define STATUS_OCP_AC23		HAL_GPIO_ReadPin(GPIOJ, GPIO_PIN_0)
					
#define STATUS_ME_BOX_K1		HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_4)													
#define STATUS_ME_BOX_K2		HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_3)
#define STATUS_ME_BOX_K3		HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_2)
#define STATUS_ME_BOX_ERROR		HAL_GPIO_ReadPin(GPIOI, GPIO_PIN_15)

#define STATUS_S13_KEY		HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0)

/* Exported types ------------------------------------------------------------*/
// typedef struct
// {
//   uint16_t u16Ocp24vFilterCount;    /*!< OCP_AC1_1 filter count.
//                           		  		*/

//   uint16_t u16OcpAc11FilterCount;   /*!< OCP_AC1_2 filter count.
//                           		  		*/

//   uint16_t u16OcpAc12FilterCount;  	/*!< OCP_AC1_3 filter count.
//                           		  		*/

//   uint16_t u16OcpAc13FilterCount;  	/*!< OCP_AC2_1 filter count.
//                           		  		*/
                          		  
//   uint16_t u16OcpAc21FilterCount;  	/*!< OCP_AC2_1 filter count.
//                           		  		*/
                          		  
//   uint16_t u16OcpAc22FilterCount;  	/*!< OCP_AC2_1 filter count.
//                           		 		 	*/    
                          		  
//   uint16_t u16OcpAc23FilterCount;  	/*!< OCP_AC1_1 filter count.
	
	
//                           		  		*/   
																		
// 	uint16_t u16MeBoxK1OnFilterCount;
																		
// 	uint16_t u16MeBoxK2OnFilterCount;
	
// 	uint16_t u16MeBoxK3OnFilterCount;
	
// 	uint16_t u16MeBoxErrorOnFilterCount;
                          		  		
//   uint16_t u16Ocp24vRecoveryFilterCount;    /*!< OCP_AC1_1 filter count.   */       

// 	uint16_t u16OcpAc11RecoveryFilterCount;    /*!< OCP_AC1_1 filter count.   */  

// 	uint16_t u16OcpAc12RecoveryFilterCount;    /*!< OCP_AC1_1 filter count.   */ 

// 	uint16_t u16OcpAc13RecoveryFilterCount;    /*!< OCP_AC1_1 filter count.   */ 
	
// 	uint16_t u16OcpAc21RecoveryFilterCount;    /*!< OCP_AC1_1 filter count.   */  

// 	uint16_t u16OcpAc22RecoveryFilterCount;    /*!< OCP_AC1_1 filter count.   */ 

// 	uint16_t u16OcpAc23RecoveryFilterCount;    /*!< OCP_AC1_1 filter count.   */ 
	
// 	uint16_t u16MeBoxK1OffFilterCount;
	
// 	uint16_t u16MeBoxK2OffFilterCount;    
	
// 	uint16_t u16MeBoxK3OffFilterCount; 
	
// 	uint16_t u16MeBoxErrorOffFilterCount;

// }GPIO_FilterTypeDef;

//typedef struct
//{
//  uint16_t u16FaultOcp24vFlag;    /*!< 1ms explore flag.
//                          		  */

//  uint16_t u16FaultOcpAc11Flag;   /*!< 10ms explore flag.
//                          		  */
//	
//  uint16_t u16FaultOcpAc12Flag;  /*!< 100ms explore flag.
//                          		  */

//  uint16_t u16FaultOcpAc13Flag;     /*!< 1s explore flag.
//                          		  */
//	uint16_t u16FaultOcpAc21Flag;     /*!< 1s explore flag.
//                          		  */
//	uint16_t u16FaultOcpAc22Flag;     /*!< 1s explore flag.
//                          		  */
//	uint16_t u16FaultOcpAc23Flag;     /*!< 1s explore flag.
//                          		  */
//	uint16_t u16PowerState;

//} FaultFlagTypeDef;

// typedef union 
// {
//   struct
//   {
// 		uint8_t u16FaultOcp24vFlag:1;
// 		uint8_t	u16FaultOcpAc11Flag:1;
// 		uint8_t u16FaultOcpAc12Flag:1;
// 		uint8_t u16FaultOcpAc13Flag:1;
// 		uint8_t u16FaultOcpAc21Flag:1;
// 		uint8_t u16FaultOcpAc22Flag:1;
// 		uint8_t u16FaultOcpAc23Flag:1;
// 		uint8_t u16PowerState:1;
//   } b;                                  
//   uint8_t all;                            
// } FaultFlagTypeDef;

/* Exported constants --------------------------------------------------------*/
// extern GPIO_FilterTypeDef 	GPIO_FilterCount;
//extern FaultFlagTypeDef		FaultFlag;
extern uint8_t u8StatusLed;
/* Exported functions --------------------------------------------------------*/
extern void App_GPIO(void);



#endif /* __APP_GPIO_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
