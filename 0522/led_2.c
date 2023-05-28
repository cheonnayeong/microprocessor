if(HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_2)){
	   if(led_state == LED_ON) {
	      HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 0);
	      HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0);
	      led_state = LED_OFF;
	    } else {
	    	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 1);
	    	HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1);
	    	led_state = LED_ON;
	    }
	 }
