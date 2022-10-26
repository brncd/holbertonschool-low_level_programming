#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include<string.h>
/**
 * _strdup - return a pointer which a copy of the string given as a parameter
 * @str: pointer
 * Return: a
 */
char *_strdup(char *str)
{
	char *a = NULL;
	int i;

	a = (char *)malloc(sizeof(char) * strlen(str) + 1);
	if (a == NULL || str == NULL)
	{
		return (NULL);
	}
	if (str != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			a[i] = str[i];
		}
		return (a);
	}
	free(a);
	a = NULL;
	return (NULL);
}
