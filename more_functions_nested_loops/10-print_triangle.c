#include "main.h"
/**
 * print_triangle - function
 * @size: int
 */
void print_triangle(int size)
{
	int count;
	int x;
    int y;

    y = count - x;

	if (size > 0)
	{
		for (count = 1; count <= size ; count++)
		{
			for (x = 1; x <= y ; x++)
			{
				_putchar('#');
			}
			_putchar(' ');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
