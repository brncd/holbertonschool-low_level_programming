#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL)
	{
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
			{
				(action)(array[i]);
			}
		}
	}
}
