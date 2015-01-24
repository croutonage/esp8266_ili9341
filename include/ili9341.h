/*
 * ili9341.h
 *
 *  Created on: 12 ���. 2015 �.
 *      Author: Sem
 */

#ifndef INCLUDE_ILI9341_H_
#define INCLUDE_ILI9341_H_


#include <ets_sys.h>
#include <osapi.h>
#include <os_type.h>
#include <gpio.h>
#include "hspi.h"

typedef union
{
   	struct
	{
   		uint8_t b0 :8;
   		uint8_t b1 :8;
   		uint8_t b2 :8;
   		uint8_t b3 :8;
   	} bytes;

   	uint32_t all;
} uint32_t_bytes;

#define TFT_CS_ACTIVE	GPIO_OUTPUT_SET(4, 0)
#define TFT_CS_DEACTIVE GPIO_OUTPUT_SET(4, 1)
#define TFT_CS_INIT		PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO4_U, FUNC_GPIO4); TFT_CS_DEACTIVE

#define TFT_DC_DATA		GPIO_OUTPUT_SET(2, 1)
#define TFT_DC_COMMAND	GPIO_OUTPUT_SET(2, 0)
#define TFT_DC_INIT 	PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO2_U, FUNC_GPIO2); TFT_DC_DATA

#define TFT_RST_ACTIVE		GPIO_OUTPUT_SET(0, 0)
#define TFT_RST_DEACTIVE 	GPIO_OUTPUT_SET(0, 1)
#define TFT_RST_INIT		PIN_FUNC_SELECT(PERIPHS_IO_MUX_GPIO0_U, FUNC_GPIO0); TFT_RST_DEACTIVE

#endif /* INCLUDE_ILI9341_H_ */