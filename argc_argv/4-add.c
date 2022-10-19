#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function
 * @argc: nt
 * @argv: array
 * Description: prints numberz
 * Return: value 0 (success) *
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		for (j = 1; *(argv[i] + j) != '\0'; j++)
		{	
			if ( (isdigit(argv[i][j]) == 0)  )
			if (*(argv[i] + j) >= 'A' && (*(argv[i] + j) <= 'z'))
			{
				printf("Error\n");
				return (1);
		}
		else 
		{
			sum += atoi(argv[i]);
		}
		}
	}
	printf("%d\n", sum);
	return (0);
}
