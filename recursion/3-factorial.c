#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: int
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (1);
}