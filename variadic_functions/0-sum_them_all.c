#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: int
 * Return: the sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i, sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(vlist, const unsigned int);
	}
	va_end(vlist);
	return (sum);
}
