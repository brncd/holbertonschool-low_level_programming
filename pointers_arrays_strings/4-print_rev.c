#include "main.h"
/**
 * print_rev - function
 * @s: char
 */
void print_rev(char *s)
{
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar(s[count]);
		--count;
	}
	_putchar('\n');
}
