/** ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : Cpu.c
**     Project     : CB_Test
**     Processor   : MK22FN512VLH12
**     Component   : MK22FN512LH12_4SDK
**     Version     : Component 01.065, Driver 01.00, CPU db: 3.00.000
**     Datasheet   : K22P121M120SF7RM, Rev. 1, March 24, 2014
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-03-06, 14:56, # CodeGen: 46
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         SystemInit            - void SystemInit(void);
**         SystemCoreClockUpdate - void SystemCoreClockUpdate(void);
**
**     (c) Freescale Semiconductor, Inc.
**     2004 All Rights Reserved
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file Cpu.c
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup Cpu_module Cpu module documentation
**  @{
*/         

/* MODULE Cpu. */

/* {Default RTOS Adapter} No RTOS includes */
#include "Cpu.h"
#include "Events.h"


#ifdef __cplusplus
extern "C" {
#endif

/*
** ===================================================================
**     Method      :  Common_Init (component MK22FN512LH12_4SDK)
**     Description :
**         Initialization of registers for that there is no 
**         initialization component.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMMON_INIT
void Common_Init(void)
{
}

#endif /* CPU_COMMON_INIT */
/*
** ===================================================================
**     Method      :  Components_Init (component MK22FN512LH12_4SDK)
**     Description :
**         Initialization of components (with exception for Peripheral
**         Initialization Components which are initialized in 
**         Peripherals_Init() method).
**         For example, if automatic initialization feature 
**         is enabled in LDD component then its Init method call 
**         is executed in Components_Init() method.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if CPU_COMPONENTS_INIT
void Components_Init(void)
{
  /* ### FreeRTOS "FreeRTOS1" init code ... */
#if configSYSTICK_USE_LOW_POWER_TIMER
  /* enable clocking for low power timer, otherwise vPortStopTickTimer() will crash */
  SIM_PDD_SetClockGate(SIM_BASE_PTR, SIM_PDD_CLOCK_GATE_LPTMR0, PDD_ENABLE);
#endif
  vPortStopTickTimer(); /* tick timer shall not run until the RTOS scheduler is started */

  /* ### KinetisSDK "KSDK1" init code ... */
  /* Write code here ... */
    /* Debug console initialization */
    DbgConsole_Init(BOARD_DEBUG_UART_INSTANCE, DEBUG_UART_BAUD, DEBUG_UART_TYPE);
  /* ### CriticalSection "CS1" init code ... */
  /*! ADC0 Auto initialization start */
  ADC16_DRV_Init(FSL_ADC0, &ADC0_InitConfig0);
  ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig0);
  /*! ADC0 Auto initialization end */
  /*! Timer1 Auto initialization start */
  FTM_DRV_Init(FSL_TIMER1,&Timer1_InitConfig0);
  FTM_DRV_SetTimeOverflowIntCmd(FSL_TIMER1,true);
  FTM_DRV_SetFaultIntCmd(FSL_TIMER1,false);
  NVIC_SetPriority(FTM0_IRQn, 160U);
  /*! Timer1 Auto initialization end */
  /*! gpio Auto initialization start */
  GPIO_DRV_Init(NULL,gpio_OutConfig0);
  /*! gpio Auto initialization end */
}
#endif /* CPU_COMPONENTS_INIT */


#ifdef __cplusplus
}
#endif

/* END Cpu. */

