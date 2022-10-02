#include <stdio.h>
/**
* main- Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		if (num < 9)
		{
			printf("%d, ", num);
		}
		else
		{
			printf("%d\n", num);
		}
	}
	return (0);
}
