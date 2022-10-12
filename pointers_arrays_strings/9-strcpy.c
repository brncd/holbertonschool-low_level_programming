#include "main.h"
char *_strcpy(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0; src[i] <= '\0'; i++)
	{
		i++;
	}
	for (x = 0; x < i && src[x] != '\0'; x++)
	{
		dest[i] = src[i];
	}
	return(dest);
}
