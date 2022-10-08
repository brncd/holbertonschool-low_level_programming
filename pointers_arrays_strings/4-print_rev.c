#include "main.h"
/**
 * print_rev - function
 * @s: char
 */
void print_rev(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{
		continue;
	}
	while (s[count] >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
