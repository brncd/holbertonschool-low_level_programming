#include "main.h"
/**
* jack_bauer- Entry point
*
*/
void jack_bauer(void)
{
	int minute = 0;
	int hour = 0;

	while (hour < 24)
	{
		for (minute = 0 ; minute < 60 ; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar(10);
		}
		hour++;
	}
}
