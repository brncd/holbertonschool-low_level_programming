#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int count;

	if (n > 0)
	{
		for (count = 0; a[count] != '\0'; count++)
		{
		printf ("%d", a[count]);
		}
	}
}

