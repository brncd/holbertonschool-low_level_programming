#include "main.h"
/**
 * swap_int - function
 * @a - int
 * @b - int
 * @c - int
 */
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
