#include "main.h"
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && n <= i)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}
