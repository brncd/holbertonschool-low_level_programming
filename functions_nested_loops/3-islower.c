#include "main.h"
/**
* _islower- Entry point
*
* Return: 1, 0
* @c: int
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
