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
#if CPU_INIT_CONFIG
  #include "Init_Config.h"
#endif
/* User includes (#include below this line is not maintained by Processor Expert) */
#include "LQ_SGP18T.h"


#define mainUI_PRIORITY				( tskIDLE_PRIORITY + 2 )
#define mainDummy2_PRIORITY				( tskIDLE_PRIORITY + 3 )
#define mainvMonitorTasks_PRIORITY				( tskIDLE_PRIORITY + 1 )
#define mainADC_PRIORITY				( tskIDLE_PRIORITY + 4 )

static void vUI( void *pvParameters );
static void vDummy2( void *pvParameters );
static void vMonitorTasks( void *pvParameters );
static void vADC( void *pvParameters );

void System_Init(void);

//Define a buffer for tasks info, 40bytes/task, so 25 tasks max.
char TaskInfo[1000];

TaskHandle_t hADC;

uint16_t V_A[128];
uint16_t V_B[128];
uint16_t V_C[128];
//float TestData[1000];

extern uint32_t MainTimer;

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

  xTaskCreate( vUI, "UserIF", 1024, NULL, mainUI_PRIORITY, NULL );
  xTaskCreate( vDummy2, "Dummy2", configMINIMAL_STACK_SIZE, NULL, mainDummy2_PRIORITY, NULL );
  xTaskCreate( vMonitorTasks, "TaskMonitor", configMINIMAL_STACK_SIZE, NULL, mainvMonitorTasks_PRIORITY, NULL );
  xTaskCreate( vADC, "ADC", 1024, NULL, mainADC_PRIORITY, hADC );

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
	ADC16_DRV_EnableHwAverage(FSL_ADC0, kAdcHwAverageCountOf4);
	ADC16_DRV_EnableLongSample(FSL_ADC0, kAdcLongSampleCycleOf4);
//	ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig0);
//	ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig1);
//	ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig2);

	//Configure FTM0 as periodical timer for ADC trigger.
//	FTM_DRV_Init(FSL_TIMER1,&Timer1_InitConfig0);
//	FTM_DRV_SetTimeOverflowIntCmd(FSL_TIMER1,true);
//	FTM_DRV_SetFaultIntCmd(FSL_TIMER1,false);
	FTM_HAL_SetClockPs(FSL_TIMER1, kFtmDividedBy128);
	FTM_DRV_CounterStart(FSL_TIMER1, kCounting_FTM_UP, 1, 375, TRUE);		//Set FTM overflow period to 500uS when core clock is 96MHz.

}

void vADC( void *pvParameters )
{
	BaseType_t rtn;
	uint32_t NotifyValue;
	uint16_t Result, ptr;

	ptr=0;

	for(;;)
	{
		//Wait for trigger notification from Timer1.
		while(xTaskNotifyWait(0, 0, &NotifyValue, pdMS_TO_TICKS(100))==pdFALSE){
			debug_printf("\r\nADC trigger time out!\r\n");
		}

		ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig0);			//Start ADC on channel1
		ADC16_DRV_WaitConvDone(FSL_ADC0, 0U);								//Wait until ADC complete.
		Result = ADC16_DRV_GetConvValueRAW(FSL_ADC0, 0U);					//Get ADC result.
		V_A[ptr]=Result;

		ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig1);			//Start ADC on channel2
		ADC16_DRV_WaitConvDone(FSL_ADC0, 0U);								//Wait until ADC complete.
		Result = ADC16_DRV_GetConvValueRAW(FSL_ADC0, 0U);					//Get ADC result.
		V_B[ptr]=Result;

		ADC16_DRV_ConfigConvChn(FSL_ADC0, 0U, &ADC0_ChnConfig2);			//Start ADC on channel3
		ADC16_DRV_WaitConvDone(FSL_ADC0, 0U);								//Wait until ADC complete.
		Result = ADC16_DRV_GetConvValueRAW(FSL_ADC0, 0U);					//Get ADC result.
		V_C[ptr]=Result;

		Result=FTM_DRV_CounterRead(FSL_TIMER1);									//Read Timer1 to see how long time passed.

		ptr++;
		if(ptr==100){
			ptr=0;
			GPIO_DRV_TogglePinOutput(LED_RED);
		}

		if(MainTimer%2000 == 0){
			debug_printf("\r\nV_In: %05d, %05d, %05d, N:%X, C:%d\r\n", V_A[0], V_B[0], V_C[0], NotifyValue, Result);
		}
	}
}


void vUI( void *pvParameters )
{
	uint8_t i=0;
	uint16_t j;

	ILI9163B_init();				//Initialize LCD module

	for(;;){
		vTaskDelay(pdMS_TO_TICKS(1000));
		LCD_prints16(0, 0, "Welcome to Shanghai!", RED, BLACK);

		vTaskDelay(pdMS_TO_TICKS(1000));
		LCD_prints16(0, 0, "Welcome to Shanghai!", GREEN, BLACK);

		vTaskDelay(pdMS_TO_TICKS(1000));
		LCD_prints16(0, 0, "Welcome to Shanghai!", BLUE, BLACK);

		vTaskDelay(pdMS_TO_TICKS(1000));
		LCD_prints16(0, 0, "Welcome to Shanghai!", YELLOW, BLACK);
	}
}

void vDummy2( void *pvParameters )
{
	uint8_t j=0;

	for(;;){
		j++;
		vTaskDelay(400);
//		debug_printf("Task Dummy2 j = %d\n\r", j);
//		GPIO_DRV_TogglePinOutput(LED_GREEN);
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
