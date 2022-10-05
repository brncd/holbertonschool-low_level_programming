#include "main.h"
/**
 * print_diagonal - function
 * @n: int
 */
void print_diagonal(int n)
{
	int count;
	int num;
	
	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (num = 0; num < count; num++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}