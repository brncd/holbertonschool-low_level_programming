#include "main.h"
/**
 * _puts - function
 * @str: int
 */
void _puts(char *str)
{
	int count;

	for( count = 0; str[count] != '\0'; count ++)
	{
		_putchar (str[count]);
	}
	_putchar (10);
}
