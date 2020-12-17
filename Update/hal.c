#include "stm32f0xx_hal.h"
//include
#define LED_GPIO_Port GPIOA //elochka_play
#define LED_Pin GPIO_PIN_3  //elochka_play
//define

/* Private function prototypes ----------------------------------------------
static void MX_GPIO_Init(void);
void Elochka_play(int a, int note);

//main



MX_GPIO_Init();
HAL_Init();
int a = 1000;
int note = 9;
//Elochka_play(a, note);






//aftermain

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

static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, LED_Pin|Water_ON_Pin|Light_Test_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(ELOCHKA_PLAY_GPIO_Port, ELOCHKA_PLAY_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_Pin Water_ON_Pin Light_Test_Pin */
  GPIO_InitStruct.Pin = LED_Pin|Water_ON_Pin|Light_Test_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : ELOCHKA_PLAY_Pin */
  GPIO_InitStruct.Pin = ELOCHKA_PLAY_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(ELOCHKA_PLAY_GPIO_Port, &GPIO_InitStruct);

}
