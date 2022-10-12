#include "main.h"
/**
 * _strcpy - function
 * @dest: char
 * @src: char
 * Reutn: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] == '\0'; ++i)
	{
		dest[i] = src[i];
	}
	return (src);
}
