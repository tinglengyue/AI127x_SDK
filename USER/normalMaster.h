﻿
//---------------------------------------------------------------------------
/*
//==========================================
// Author : JC<jc@acsip.com.tw>
// Copyright 2016(C) AcSiP Technology Inc.
// 版權所有：群登科技股份有限公司
// http://www.acsip.com.tw
//==========================================
*/
//---------------------------------------------------------------------------


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef USER_NORMALMASTER_H_
#define USER_NORMALMASTER_H_

/* Includes ------------------------------------------------------------------*/
#include <stdbool.h>
#ifdef STM32F072
	#include "stm32f0xx.h"
#endif
#ifdef STM32F401xx
	#include "stm32f4xx.h"
#endif
#include "acsip_protocol.h"
#include "LinkListEvent.h"

/* Exported types ------------------------------------------------------------*/
// General parameters definition
// SX1276 LoRa General parameters definition

/* Exported constants --------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
uint8_t		NormalMaster(__IO tLoraRunningEvent *);



#endif		// USER_NORMALMASTER_H_

/************************ Copyright 2016(C) AcSiP Technology Inc. *****END OF FILE****/
