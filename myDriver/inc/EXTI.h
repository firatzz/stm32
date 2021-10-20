/*
 * EXTI.h
 *
 *  Created on: Sep 16, 2021
 *      Author: Firat
 */

#ifndef INC_EXTI_H_
#define INC_EXTI_H_

#include "stm32f407xx.h"

/*
 *
 * @def_group	PORT_Values
 *
 * */

#define EXTI_PortSource_GPIOA			(uint8_t)(0x0)
#define EXTI_PortSource_GPIOB			(uint8_t)(0x1)
#define EXTI_PortSource_GPIOC			(uint8_t)(0x2)
#define EXTI_PortSource_GPIOD			(uint8_t)(0x3)
#define EXTI_PortSource_GPIOE			(uint8_t)(0x4)
#define EXTI_PortSource_GPIOF			(uint8_t)(0x5)
#define EXTI_PortSource_GPIOG			(uint8_t)(0x6)
#define EXTI_PortSource_GPIOH			(uint8_t)(0x7)

/*
 *
 * @def_group	EXTI_Line_Values
 *
 * */

#define EXTI_Source_0					(uint8_t)(0x0)
#define EXTI_Source_1					(uint8_t)(0x1)
#define EXTI_Source_2					(uint8_t)(0x2)
#define EXTI_Source_3					(uint8_t)(0x3)
#define EXTI_Source_4					(uint8_t)(0x4)
#define EXTI_Source_5					(uint8_t)(0x5)
#define EXTI_Source_6					(uint8_t)(0x6)
#define EXTI_Source_7					(uint8_t)(0x7)
#define EXTI_Source_8					(uint8_t)(0x8)
#define EXTI_Source_9					(uint8_t)(0x9)
#define EXTI_Source_10					(uint8_t)(0xA)
#define EXTI_Source_11					(uint8_t)(0xB)
#define EXTI_Source_12					(uint8_t)(0xC)
#define EXTI_Source_13					(uint8_t)(0xD)
#define EXTI_Source_14					(uint8_t)(0xE)
#define EXTI_Source_15					(uint8_t)(0xF)

/*
 *
 * @def_group	EXTI_Modes
 *
 * */

#define EXTI_MODE_Interrupt		(0x00U)
#define	EXTI_MODE_Event			(0x04U)

/*
 *
 * @def_group	EXTI_Trigger_Values
 *
 * */

#define EXTI_Trigger_Rising			(0x08U)
#define	EXTI_Trigger_Falling		(0x0CU)
#define EXTI_Trigger_RF				(0x10U)

typedef struct
{
	uint8_t EXTI_LineNumber;					/*!<	EXTI Line number for valid GPIO pin  @def_group EXTI_Line_Values	*/
	uint8_t TriggerSelection;					/*!<	EXTI Rising/Falling Trigger Selection @def_group EXTI_Trigger_Values*/
	uint8_t EXTI_Mode;							/*!<	EXTI Mode Values @def_group EXTI_Modes*/
	FunctionalState_t EXTI_LineCmd;				/*!<	Mask or Unmask the line number*/
}EXTI_InitTypeDef_t;



void EXTI_Init(EXTI_InitTypeDef_t *EXTI_InitStruct);
void EXTI_LineConfig(uint8_t PortSource, uint8_t EXTI_LineSource);
void NVIC_EnableInterrupt(IRQNumber_TypeDef_t IRQNumber);

#endif /* INC_EXTI_H_ */
