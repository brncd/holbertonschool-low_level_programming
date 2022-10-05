#include "main.h"
/**
 * _isupper - function
 * @c: int
 * Return: 0 || 1
 */
int _isupper(int c)
{
	if (c > 64 && c < 95)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}