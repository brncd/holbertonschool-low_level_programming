#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list vlist;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}
	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(vlist, const unsigned int));
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(vlist);
}

