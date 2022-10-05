#include "main.h"
/**
 * print_triangle - function
 * @size: int
 */
void print_triangle(int size)
{
	int count;
	int x;

	if (size > 0)
	{
		for (count = 0; count <= size; count++)
		{
			for (x = size - 1; x > 0; x--)
			{
				if (count > x)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}