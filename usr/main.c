#include "NUC123.h"
#include "clk.h"
#include "dev_led.h"
#include "task.h"


void led_task1(void)
{
    while(1)
		{
		    IO_LED_PWR = 1;
			  vTaskDelay(500);
		    IO_LED_PWR = 0;
			  vTaskDelay(500);			
		}
}


void led_task2(void)
{
    while(1)
		{
		    IO_LED_ONHOOK = 1;
			  vTaskDelay(1000);
		    IO_LED_ONHOOK = 0;
			  vTaskDelay(1000);			
		}
}


int main(void)
{
 //   NVIC_Pri
		dev_led_init();
	  xTaskCreate(led_task1,"LED_PWR",40,NULL,1,NULL);
	  xTaskCreate(led_task2,"LED_ONHOOK",40,NULL,2,NULL);	
	  vTaskStartScheduler();
		while(1);
}
