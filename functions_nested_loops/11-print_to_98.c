#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: int
 **/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("98\n");
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}
		printf("98\n");
		}
}
