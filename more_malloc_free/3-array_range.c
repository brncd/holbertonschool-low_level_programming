#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: int
 * @max: int
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i, x;

	if (min > max)
	{
		return (NULL);
	}
	p = (int *)malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	x = (max - min + 1);
	for (i = 0; i < x; i++)
	{
		p[i] = min++;
	}
	return (p);
}
