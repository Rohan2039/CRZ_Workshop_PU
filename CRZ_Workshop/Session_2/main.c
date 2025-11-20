#include <stdint.h>

#define LED_MODER  (*(volatile unsigned int *) 0x40020C00)
#define LED_ODR    *(volatile unsigned int*) (0x40020C00 + 0x14)
#define  LED_ODR_SET  (1u<<14)
#define  LED_MODER_SET 1u<<28
#define RCC_AHB1ENR (*(volatile unsigned int *) 0x40023830)
#define WAIT_TIME 10000000

void main(void);
void main(void)
{

  RCC_AHB1ENR |= 0x9;//(1u<<3); // Enable GPIOD clock
  
  uint32_t seconds = 0;
  LED_MODER |=LED_MODER_SET;

  uint32_t Wait_time=WAIT_TIME;
  while (1)
    {
        //Trun on the LED
        LED_ODR|=LED_ODR_SET;

        //Wait for some time
        Wait_time=WAIT_TIME;
        while(Wait_time--){}
        
        //Trun off the LED
        LED_ODR&=(~LED_ODR_SET);

        //Wait for some time
        Wait_time=WAIT_TIME;
        while(Wait_time--){} 

    }

}