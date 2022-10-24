#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *
 */
char *_strdup(char *str)
{
	char *a = NULL;
	int i;

	if (str != NULL)
	{
		a = (char *)malloc(sizeof(char) * *str);
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
