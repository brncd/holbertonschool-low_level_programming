#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: int
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = (void *)malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
