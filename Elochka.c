
int a = 1000;
int note = 9;
 
//Elochka_play(a, note);
//запуск мелоддии (лучше производить в отдельной нити)


void Elochka_play(int a, int note){
	  for(int i=0; i<a/note;i++){
		  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		  HAL_Delay(note);
	  };
	  HAL_Delay(25);

	  note = 10.08;
	  for(int i=0; i<a/(2*note);i++){
	 	 HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
	 	 HAL_Delay(note);
	  };
	  HAL_Delay(12);

	  note = 10.08;
	  for(int i=0; i<a/(2*note);i++){
	  	 	 HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
	  	 	 HAL_Delay(note);
	  	 	  };
	  HAL_Delay(25);

	  note = 9;
	  for(int i=0; i<a/(note);i++){
	  	 	 HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
	  	 	 HAL_Delay(note);
	  	  };
	  	HAL_Delay(25);

	  	note = 10.08;
	    for(int i=0; i<a/(2*note);i++){
	  	  	 	 HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
	  	  	 	 HAL_Delay(note);
	  	  	  };
	    HAL_Delay(12);

	  	note = 10.08;
	    for(int i=0; i<a/(2*note);i++){
	  	  	 	 HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
	  	  	 	 HAL_Delay(note);

	  	  	  };
	  	HAL_Delay(25);

		  note = 9;
		  for(int i=0; i<a/(2*note);i++){
			  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
			  HAL_Delay(note);
		  };
		  HAL_Delay(12);

		  note = 10.08;
		 		  for(int i=0; i<a/(2*note);i++){
		 			  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		 			  HAL_Delay(note);
		 		  };
		 		  HAL_Delay(12);




		 		 note = 11.3;
		 		 		 		  for(int i=0; i<a/(2*note);i++){
		 		 		 			  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		 		 		 			  HAL_Delay(note);
		 		 		 		  };
		 		 		 		  HAL_Delay(12);


		 		 		 		note = 12.6;
		 		 		 				 		  for(int i=0; i<a/(2*note);i++){
		 		 		 				 			  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		 		 		 				 			  HAL_Delay(note);
		 		 		 				 		  };
		 		 		 				 		  HAL_Delay(12);

		 		 		 				 		note = 14.12;
		 		 		 				 				 		  for(int i=0; i<a/note;i++){
		 		 		 				 				 			  HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
		 		 		 				 				 			  HAL_Delay(note);
		 		 		 				 				 		  };
		 		 		 				 				 		  HAL_Delay(12);
	}


