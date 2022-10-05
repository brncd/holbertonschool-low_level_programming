#include "main.h"
/**
 * print_square - function
 * @size: int
 */
void print_square(int size)
{
	int line;
	int column;

	if (size > 0)
	{
		for (line = 1; line <= size; line++)
		{
			for (column = 1; column < size; column++)
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
