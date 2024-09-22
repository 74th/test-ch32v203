#include "ch32v003fun.h"
#include <stdio.h>

int main()
{
	SystemInit();

	funGpioInitAll();

	funPinMode(PA5, GPIO_CFGLR_OUT_10Mhz_PP);

	while (1)
	{
		funDigitalWrite(PA5, FUN_HIGH);
		Delay_Ms(1000);
		funDigitalWrite(PA5, FUN_LOW);
		Delay_Ms(1000);
	}
}
