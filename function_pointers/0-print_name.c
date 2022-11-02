#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: char
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
