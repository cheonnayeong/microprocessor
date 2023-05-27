if(HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_2)) {
       HAL_Delay(100);
       if(HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_2)){
    	  HAL_GPIO_WritePin(led[i].port, led[i].pin, GPIO_PIN_SET);
    	  if(i>0) i--;
       }

    }

    if(HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_4)) {
       HAL_Delay(100);
       if(HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_4)){
    	  HAL_GPIO_WritePin(led[i].port, led[i].pin, GPIO_PIN_RESET);
    	  if(i>0) i--;
       }
    }
