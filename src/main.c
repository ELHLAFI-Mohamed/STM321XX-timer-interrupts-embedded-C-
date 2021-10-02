#include "stm32f1xx.h"
#include "GPIO_drive.h"
#include "timer_drive.h"

//###########################################
/*
void TIM1_UP_IRQHandler(){}
void TIM2_IRQHandler(){}
void TIM3_IRQHandler(){}
void TIM4_IRQHandler(){}
*/



int main(void){


	timer_irq_millis_start(T1,500);
GPIO_init(port_A,8,Output_50Mhz,Output_GP_PP);
GPIO_init(port_A,9,Output_50Mhz,Output_GP_PP);


 while(1){



	 GPIO_toggle(port_A,8);
	 TDelay_Milli(500);
	// timer_stop(T1);

 }


}


void TIM1_UP_IRQHandler(){
	timer_irq_Rflag(T1);
	 GPIO_toggle(port_A,9);

}

































