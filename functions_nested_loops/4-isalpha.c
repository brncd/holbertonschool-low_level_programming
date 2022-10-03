#include "main.h"
/**
* _isalpha- Entry point
*
* Return: 1, 0
* @c: int
*/
int _isalpha(int c)
{
	if (c > 64 && c < 123)
	{
		return (1);
	}
	else if (c > 96 && c < 123)
	{

		return (1);
	}
	else
	{
		return (0);
	}
}
