#include "main.h"
/**
 * print_rev - function
 * @s: char
 */
void rev_string(char *s)
{
	char *revstr;
	int count = 0;
	int x;

	while (s[count] != '\0')
	{
		count++;
	}
	x = count - 1;
	while ( count < 0)
	{
		revstr = s;
		s[count] = s[x];
		s = revstr;
		count++;
		x--;
	}
}
