#include "main.h"
/**
* swap_int - function
* @c - int
* @a - int
* @b - int
*/
void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
