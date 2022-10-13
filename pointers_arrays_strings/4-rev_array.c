#include "main.h"
/**
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int t;

	while (n > i)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;
		i++;
	}
}
