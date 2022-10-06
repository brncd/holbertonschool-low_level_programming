#include <stdio.h>
/**
 *main - function
 *Return: 0
 */
int main(void)
{
	int i = 0;

	for (i = 1; i <= 99; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz ");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
	
}