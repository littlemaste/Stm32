#include "stm32f10x.h"
#include "z_delay.h"

int main(void)
{
	GPIO_InitTypeDef  GPIO_InitStructure;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);

   	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_1;          
    GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;  
    GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP; 
	GPIO_Init(GPIOA,&GPIO_InitStructure);
//	GPIO_SetBits(GPIOA,GPIO_Pin_1);
	while(1) 
	{
//		GPIO_SetBits(GPIOA,GPIO_Pin_1);
		GPIO_ResetBits(GPIOA,GPIO_Pin_1);
		Delay(0XFFFEF);
	    GPIO_SetBits(GPIOA,GPIO_Pin_1);
		Delay(0XFFFEF);
	
	}
}

