#include "main.h"

int main(void) {
	RCC ->APB2ENR |= (0x1<<2)|(0x1<<4);
	GPIOA->CRL &= ~(0x00400000);  //~(0x1<<22);
	GPIOA->CRL |=   0x00100000;      //(0x1<<20); output select
	GPIOC->CRH &= ~(0x00400000);  //~(0x1<<22);
	GPIOC->CRH |= (0x00800000); // (0x1<<23); input select
	GPIOC->ODR |= (0x00002000);   // (0x1<<13)

	while(1) {
		if(GPIOC->IDR & 0x00002000) {
			GPIOA->BSRR |= 0x1<<21; // 0x00200000;
		}else {
			GPIOA->BSRR |= 0x1<<5; //0x00000020; //LED set
		}
	}

}
