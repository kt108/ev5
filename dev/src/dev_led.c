#include "dev_led.h"


void dev_led_init(void)
{
    SYS->GPC_MFP &= ~(SYS_GPC_MFP_PC12_Msk | SYS_GPC_MFP_PC11_Msk);
	  SYS->GPC_MFP |= (SYS_GPC_MFP_PC12_GPIO | SYS_GPC_MFP_PC11_GPIO);
    GPIO_SetMode(PC,BIT12|BIT11,GPIO_PMD_OUTPUT);
    IO_LED_PWR = 0;
	  IO_LED_ONHOOK = 0;
	
}
