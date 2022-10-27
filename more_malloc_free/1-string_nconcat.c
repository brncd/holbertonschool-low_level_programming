#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int i, x;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	p = (char *)malloc(strlen(s1) + n + 1);	
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= strlen(s1); i++)
	{
		p[i] = s1[i];
	}
	for (x = 0; x < n; x++)
	{
		p[strlen(s1) + x] = s2[x];
	}
	p[x] = '\0';
	return (p);
}
