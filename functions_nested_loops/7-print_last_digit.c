#include "main.h"
/**
* print_last_digit- Entry point
*
* Return: 1, 0
* @n: int
*/
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit >= 0)
	{
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else if (lastDigit < 0)
	{
		lastDigit *= -1;
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
