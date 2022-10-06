#include "main.h"
/**
 * _strlen - function
 * @s - int
 * @count - int
 */
int _strlen(char *s)
{
	int count = 0;
	
	while (s [count] != '\0')
	{
		count++;
	}
	return(count);
}
