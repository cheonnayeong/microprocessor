#include "main.h"

void Delay_Timer(uint32_t time) { //기본구조
	for(; time > 0; time--) { //준 값 실행(잠시 딜레이,정확한 시간값)

	}
}
void set_led(uint8_t n) {
	switch(n) {
	case 1:
		GPIOA -> BSRR |= 0x01<<12;
		delay_timer(50000);
		GPIOA -> BSRR |= 0x01<<28;
		delay_timer(50000);
		break;
		
	case 2:
		GPIOA -> BSRR |= 0x01<<11;
		delay_timer(50000);
		GPIOA -> BSRR |= 0x01<<27;
		delay_timer(50000);
		break;
		
	case 3:
		GPIOB -> BSRR |= 0x01<<12;
		delay_timer(50000);
		GPIOB -> BSRR |= 0x01<<28;
		delay_timer(50000);
		break;
		
	case 4:
		GPIOB -> BSRR |= 0x01<<11;
		delay_timer(50000);
		GPIOB -> BSRR |= 0x01<<27;
		delay_timer(50000);
		break;
	}
int main(void) {
	RCC->APB2ENR |= (0x01<<2) | (0x01<<3);
	GPIOA->CRH &= ~(0x440000); //~0X4000000;
	GPIOA->CRH |= 0x110000; //0x100000;,PA5출력
	GPIOB->CRH &= ~(0x440000);
	GPIOA->CRH |= 0x110000;
}
	while(1) {
		for(uint8_t i=1; i<5; i++) {
			set_led(i);
		}

	}
}
