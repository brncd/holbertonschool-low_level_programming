#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Write a function that creates an array of chars
 * @size: unsigned int
 * @c: char
 * Return: a
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a = NULL;

	a = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else if (size != 0 || a != 0)
	{
		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);
	}
	return (NULL);
}
