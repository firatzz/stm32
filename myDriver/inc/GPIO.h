/*
 * GPIO.h
 *
 *  Created on: Sep 14, 2021
 *      Author: Firat
 */

#ifndef INC_GPIO_H_
#define INC_GPIO_H_

#include "stm32f407xx.h"

/*
 * @def_group GPIO Pins
 *
 * */

#define GPIO_PIN_0			(uint16_t)(0x0001)		/*!<	GPIO Pin 0 Selected		*/
#define GPIO_PIN_1			(uint16_t)(0x0002)		/*!<	GPIO Pin 1 Selected		*/
#define GPIO_PIN_2			(uint16_t)(0x0004)		/*!<	GPIO Pin 2 Selected		*/
#define GPIO_PIN_3			(uint16_t)(0x0008)		/*!<	GPIO Pin 3 Selected		*/
#define GPIO_PIN_4			(uint16_t)(0x0010)		/*!<	GPIO Pin 4 Selected		*/
#define GPIO_PIN_5			(uint16_t)(0x0020)		/*!<	GPIO Pin 5 Selected		*/
#define GPIO_PIN_6			(uint16_t)(0x0040)		/*!<	GPIO Pin 6 Selected		*/
#define GPIO_PIN_7			(uint16_t)(0x0080)		/*!<	GPIO Pin 7 Selected		*/
#define GPIO_PIN_8			(uint16_t)(0x0100)		/*!<	GPIO Pin 8 Selected		*/
#define GPIO_PIN_9			(uint16_t)(0x0200)		/*!<	GPIO Pin 9 Selected		*/
#define GPIO_PIN_10			(uint16_t)(0x0400)		/*!<	GPIO Pin 10 Selected		*/
#define GPIO_PIN_11			(uint16_t)(0x0800)		/*!<	GPIO Pin 11 Selected		*/
#define GPIO_PIN_12			(uint16_t)(0x1000)		/*!<	GPIO Pin 12 Selected		*/
#define GPIO_PIN_13			(uint16_t)(0x2000)		/*!<	GPIO Pin 13 Selected		*/
#define GPIO_PIN_14			(uint16_t)(0x4000)		/*!<	GPIO Pin 14 Selected		*/
#define GPIO_PIN_15			(uint16_t)(0x8000)		/*!<	GPIO Pin 15 Selected		*/
#define GPIO_PIN_All		(uint16_t)(0xFFFF)		/*!<	GPIO Pin ALL Selected		*/

/*
 * @def_group GPIO_Pin_Modes
 *
 * */

#define GPIO_MODE_INPUT			(0x0u)
#define GPIO_MODE_OUTPUT		(0x1U)
#define GPIO_MODE_AF			(0x2U)
#define GPIO_MODE_ANALOG		(0x3U)


/*
 * @def_group GPIO_OTYPE_Modes
 *
 * */

#define GPIO_OTYPE_PP			(0x0U)
#define GPIO_OTYPE_OD			(0x1U)


/*
 * @def_group GPIO_PUPD_Modes
 *
 * */

#define GPIO_PUPD_NOPULL			(0x0u)
#define GPIO_PUPD_PULLUP			(0x1U)
#define GPIO_PUPD_PULLDOWN			(0x2U)

/*
 * @def_group GPIO_OSPEED_Modes
 *
 * */

#define GPIO_OSPEED_LOW			(0x0U)
#define GPIO_OSPEED_MEDIUM		(0x1U)
#define GPIO_OSPEED_HIGH		(0x2U)
#define GPIO_OSPEED_VERY 		(0x3U)


typedef enum
{
	GPIO_Pin_Reset = 0x0U,
	GPIO_Pin_Set = !GPIO_Pin_Reset
}GPIO_PinState_t;

typedef struct
{
	uint32_t pinNumber;		/*!< GPIO Pin Numbers @def_group GPIO_Pins	*/
	uint32_t Mode;			/*!< GPIO Pin Numbers @def_group GPIO_Pin_Modes	*/
	uint32_t Otype;			/*!< GPIO Pin Numbers @def_group GPIO_OTYPE_Modes	*/
	uint32_t PuPd;			/*!< GPIO Pin Numbers @def_group GPIO_PUPD_Modes	*/
	uint32_t Speed;			/*!< GPIO Pin Numbers @def_group GPIO_OSPEED_Modes	*/
	uint32_t Alternate;

}GPIO_InitTypeDef_t;


void GPIO_Init(GPIO_TypeDef_t *GPIOx, GPIO_InitTypeDef_t *GPIO_ConfigStruct );
void GPIO_WritePin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber, GPIO_PinState_t pinState );
GPIO_PinState_t GPIO_ReadPin(GPIO_TypeDef_t *GPIOx, uint16_t pinNumber );
void GPIO_LockPin( GPIO_TypeDef_t *GPIOx, uint16_t pinNumber );
void GPIO_TogglePin( GPIO_TypeDef_t *GPIOx, uint16_t pinNumber );



#endif /* INC_GPIO_H_ */
