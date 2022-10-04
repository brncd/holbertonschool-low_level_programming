#include "main.h"
/**
* times_table- Entry point
*
*/
void times_table(void)
{
	int count = 0;
	int number = 0;

	while (count < 10)
	{
		for (number = 0; number < 10; number++)
	{
		if (number * count < 10 && number != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar((number * count % 10) + '0');
		}
		else if (number * count == 0)
		{
			_putchar('0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar((number * count / 10) + '0');
			_putchar((number * count % 10) + '0');
		}
	}
	count++;
	_putchar('\n');
	}
}
