#include "main.h"
/**
 * print_triangle - function
 * @size: int
 */
void print_triangle(int size)
{
	int count = 0;
	int x = 1;
    int y = 0;

    

	if (size > 0)
	{
		for (count = 1; count <= size ; count++)
		{
			y = count - x;
            for (x = 1; x <= y ; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
            _putchar(' ');

		}
	}
	else
	{
		_putchar('\n');
	}
}
