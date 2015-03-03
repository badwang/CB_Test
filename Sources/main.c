/* ###################################################################
**     Filename    : main.c
**     Project     : CB_Test
**     Processor   : MK22FN512VLH12
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-02-10, 21:23, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file main.c
** @version 01.01
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup main_module main module documentation
**  @{
*/         
/* MODULE main */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "pin_init.h"
#include "osa1.h"
#include "FreeRTOS1.h"
#include "UTIL1.h"
#include "KSDK1.h"
#include "gpio1.h"
#include "DbgCs1.h"
#include "WAIT1.h"
#include "CS1.h"
#include "ADC0.h"
#include "Timer1.h"
#if CPU_INIT_CONFIG
  #include "Init_Config.h"
#endif
/* User includes (#include below this line is not maintained by Processor Expert) */

#define mainDummy1_PRIORITY				( tskIDLE_PRIORITY + 2 )
#define mainDummy2_PRIORITY				( tskIDLE_PRIORITY + 3 )
#define mainvMonitorTasks_PRIORITY				( tskIDLE_PRIORITY + 1 )
#define mainADC_PRIORITY				( tskIDLE_PRIORITY + 4 )

static void vDummy1( void *pvParameters );
static void vDummy2( void *pvParameters );
static void vMonitorTasks( void *pvParameters );
static void vADC( void *pvParameters );

void System_Init(void);

//Define a buffer for tasks info, 40bytes/task, so 25 tasks max.
char TaskInfo[1000];

//float TestData[1000];

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

	uint16_t i;

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/

  /* Write your code here */
  /* For example: for(;;) { } */

  System_Init();				//Initialize and enable peripherals before RTOS starts.

  xTaskCreate( vDummy1, "Dummy1", configMINIMAL_STACK_SIZE, NULL, mainDummy1_PRIORITY, NULL );
  xTaskCreate( vDummy2, "Dummy2", configMINIMAL_STACK_SIZE, NULL, mainDummy2_PRIORITY, NULL );
  xTaskCreate( vMonitorTasks, "TaskMonitor", configMINIMAL_STACK_SIZE, NULL, mainvMonitorTasks_PRIORITY, NULL );
  xTaskCreate( vADC, "ADC", 1024, NULL, mainADC_PRIORITY, NULL );

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END main */


void System_Init(void)
{

	//Configure ADC converter.
//	ADC16_DRV_Init(FSL_ADC0, &ADC0_InitConfig0);
	ADC16_DRV_EnableHwAverage(FSL_ADC0, kAdcHwAverageCountOf8);
	ADC16_DRV_EnableLongSample(FSL_ADC0, kAdcLongSampleCycleOf4);
//	ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig0);
//	ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig1);
//	ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig2);

	//Configure FTM0 as periodical timer for ADC trigger.
//	FTM_DRV_Init(FSL_TIMER1,&Timer1_InitConfig0);
//	FTM_DRV_SetTimeOverflowIntCmd(FSL_TIMER1,true);
//	FTM_DRV_SetFaultIntCmd(FSL_TIMER1,false);
	FTM_HAL_SetClockPs();
	FTM_DRV_CounterStart(FSL_TIMER1, kCounting_FTM_UP, 0, 65500, TRUE);

}

void vADC( void *pvParameters )
{



}


void vDummy1( void *pvParameters )
{
	uint8_t i=0;
	uint16_t j;

	for(;;){
		i++;
		vTaskDelay(200);
/*		debug_printf("Task Dummy1 i = %d\n\r", i);
		debug_printf("Calculating 1000 datas start...");
		for(j=0;j<1000;j++){
			TestData[j]=TestData[j]*2.5;
		}
		for(j=0;j<1000;j++){
			TestData[j]=TestData[j]/2.5;
		}
		debug_printf("Done!\r\n");*/
		GPIO_DRV_TogglePinOutput(LED_RED);
	}
}

void vDummy2( void *pvParameters )
{
	uint8_t j=0;

	for(;;){
		j++;
		vTaskDelay(400);
//		debug_printf("Task Dummy2 j = %d\n\r", j);
		GPIO_DRV_TogglePinOutput(LED_GREEN);
	}
}

void vMonitorTasks( void *pvParameters )
{
	uint16_t i=0;

	for(;;){
		vTaskDelay(1000);
		i++;
		vTaskList(TaskInfo, 1000);
		debug_printf("\r\n*********** %dth Tasks Check ********\r\n", i);
		debug_printf("TaskName    State  Priority  StackLeft  TaskNum \r\n");
		debug_printf("%s", TaskInfo);
		debug_printf("*************************************\r\n");
		vTaskGetRunTimeStats(TaskInfo, 1000);
		debug_printf("%s", TaskInfo);
		debug_printf("*************************************\r\n");
	}
}


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
