#include <stdio.h>
/**
* main- Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char nbase;

	for (nbase = '0'; nbase <= '9'; nbase++)
	{
		putchar(nbase);
	}
	for (nbase = 'a'; nbase <= 'f'; nbase++)
	{
		putchar(nbase);
	}
	{
		putchar('\n');
	}
	return (0);
}
