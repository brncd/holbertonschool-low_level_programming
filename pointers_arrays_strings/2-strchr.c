#include "main.h"
#include <stddef.h>
/**
 * _strchr - function
 * @s: char
 * @c: char
 * Return: a pointer to the first occurrence of the character c or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
