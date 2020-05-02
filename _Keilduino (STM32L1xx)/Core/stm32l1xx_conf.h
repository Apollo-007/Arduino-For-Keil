#ifndef __STM32L1XX_CONF_H
#define __STM32L1XX_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

#include "stm32l1xx_adc.h"
#include "stm32l1xx_aes.h"
#include "stm32l1xx_crc.h"
#include "stm32l1xx_comp.h"
#include "stm32l1xx_dac.h"
#include "stm32l1xx_dbgmcu.h"
#include "stm32l1xx_dma.h"
#include "stm32l1xx_exti.h"
#include "stm32l1xx_flash.h"
#include "stm32l1xx_gpio.h"
#include "stm32l1xx_syscfg.h"
#include "stm32l1xx_i2c.h"
#include "stm32l1xx_iwdg.h"
#include "stm32l1xx_pwr.h"
#include "stm32l1xx_rcc.h"
#include "stm32l1xx_rtc.h"
#include "stm32l1xx_spi.h"
#include "stm32l1xx_tim.h"
#include "stm32l1xx_usart.h"
#include "stm32l1xx_wwdg.h"
#include "misc.h"  /* High level functions for NVIC and SysTick (add-on to CMSIS functions) */


/* ȡ��������һ��չ��assert_param�����ڱ�׼�����������������*/
/*#define USE_FULL_ASSERT    1 */

/* �����ĺ궨�� --------------------------------------------------------------*/
#ifdef  USE_FULL_ASSERT

/***************************************************************************//**
  * @brief   assert_param ���ڲ������.
  * @param   expr: ����expr��flase, ������� assert_param
  *          ������������ڵ�Դ�ļ��������ڵ�����
  *          ����expr �� true, ��������ֵ.
  * @retval  ��
*******************************************************************************/
#define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
/* ��������------------------------------------------------------------------ */
void assert_failed(uint8_t* file, uint32_t line);
#else
#define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */

#ifdef __cplusplus
}// extern "C"
#endif

#endif /* __STM32L1XX_CONF_H */
