/* ###################################################################
**     Filename    : Events.h
**     Project     : CB_Test
**     Processor   : MK22FN512VLH12
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-02-10, 21:23, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file Events.h
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup Events_module Events module documentation
**  @{
*/         

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "fsl_device_registers.h"
#include "osa1.h"
#include "FreeRTOS1.h"
#include "UTIL1.h"
#include "KSDK1.h"
#include "DbgCs1.h"
#include "WAIT1.h"
#include "CS1.h"
#include "ADC0.h"
#include "Timer1.h"
#include "gpio.h"

#ifdef __cplusplus
extern "C" {
#endif 


void FreeRTOS1_vApplicationStackOverflowHook(xTaskHandle pxTask, char *pcTaskName);
/*
** ===================================================================
**     Event       :  FreeRTOS1_vApplicationStackOverflowHook (module Events)
**
**     Component   :  FreeRTOS1 [FreeRTOS]
**     Description :
**         if enabled, this hook will be called in case of a stack
**         overflow.
**     Parameters  :
**         NAME            - DESCRIPTION
**         pxTask          - Task handle
**       * pcTaskName      - Pointer to task name
**     Returns     : Nothing
** ===================================================================
*/

void FreeRTOS1_vApplicationTickHook(void);
/*
** ===================================================================
**     Event       :  FreeRTOS1_vApplicationTickHook (module Events)
**
**     Component   :  FreeRTOS1 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called by the RTOS for every
**         tick increment.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FreeRTOS1_vApplicationIdleHook(void);
/*
** ===================================================================
**     Event       :  FreeRTOS1_vApplicationIdleHook (module Events)
**
**     Component   :  FreeRTOS1 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called when the RTOS is idle.
**         This might be a good place to go into low power mode.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FreeRTOS1_vApplicationMallocFailedHook(void);
/*
** ===================================================================
**     Event       :  FreeRTOS1_vApplicationMallocFailedHook (module Events)
**
**     Component   :  FreeRTOS1 [FreeRTOS]
**     Description :
**         If enabled, the RTOS will call this hook in case memory
**         allocation failed.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FTM0_IRQHandler(void);

void RTOSTRC1_OnTraceWrap(void);
/*
** ===================================================================
**     Event       :  RTOSTRC1_OnTraceWrap (module Events)
**
**     Component   :  RTOSTRC1 [PercepioTrace]
**     Description :
**         Called for trace ring buffer wrap around. This gives the
**         application a chance to dump the trace buffer.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void ADC0_IRQHandler(void);

/* END Events */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif 
/* ifndef __Events_H*/
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.11]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
