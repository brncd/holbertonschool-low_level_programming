#include "main.h"
/**
 * print_square - function
 * @size: int
 */
void print_square(int size)
{
    int count;
	int num;

	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
			for (num = 0; num < count; num++)
			{
				_putchar(35);
			}
			_putchar(35);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}