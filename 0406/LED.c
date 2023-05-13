#include "main.h"

void Delay_Timer(uint32_t time) { //기본구조
	for(; time > 0; time--) { //준 값 실행(잠시 딜레이,정확한 시간값)

	}
}
int main(void) {
//	RCC->APB2ENR = 0x00000004; //PORTA 버스 탑승권 허용
//	GPIOA->CRL = 0x44144444; //PORTA PA5 출력 설정
	RCC->APB2ENR |= (1<<2);
	GPIOA->CRL &= ~(1<<22); //~0X4000000;
	GPIOA->CRL |= ~(1<<20); //0x100000;,PA5출력

	while(1) {
		//GPIOA-ODR |= (1 << 5); 0x00000020; //LED ON
		//Delay_Timer(100000);
		//GPIOA->ODR &= ~(1<<5); ~0x00000020; //LED OFF
		//Delay_Timer(100000);

		GPIOA->BSRR |= (1<<5); //PORT RESET
		Delay_Timer(100000);
		GPIOA->BSRR |= (1<<21);
		Delay_Timer(500000);

	}
}
