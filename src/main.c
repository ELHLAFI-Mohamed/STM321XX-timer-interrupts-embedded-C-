#include "stm32f1xx.h"
#include "GPIO_drive.h"




int main(void){


GPIO_init(port_A,0,Input_mode,Input_PP);
GPIO_init(port_C,13,Output_50Mhz,Output_GP_PP);
GPIO_init(port_A,12,Output_50Mhz,Output_GP_PP);
__disable_irq();

    SysTick->CTRL=0;
	SysTick->LOAD=7200000-1;
	SysTick->VAL=0;
	SysTick->CTRL=7;

__enable_irq();

 while(1){

	 GPIO_write(port_A,12,GPIO_read(port_A,0));

 }


}

void SysTick_Handler(void){

	GPIO_toggle(port_C,13);
}


































