#include <stdio.h>
/**
* main- Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		printf("%c", alphabet);
		alphabet++;
	}
	{
		printf("\n");
	}
	return (0);
}
