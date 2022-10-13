#include "main.h"
/**
 * _strncat - function
 * @dest: char
 * @src: char
 * @n: int
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[x] != '\0' &&  x < n)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	return (dest);
}

