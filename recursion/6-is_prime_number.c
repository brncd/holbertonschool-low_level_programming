#include "main.h"

/**
 * _is_prime_number - function
 * @x:  int
 * @y: int
 * Return: 0
 */
int _is_prime_number(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	return (_is_prime_number(x, y + 1));
}

/**
 * is_prime_number - function
 * @n: int
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_is_prime_number(n, 2));
}
