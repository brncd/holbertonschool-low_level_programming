#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= 'A' && *argv[i] <= 'z')
		{
			printf("%s\n", "Error");
			printf("Error\n");
			return (1);
	}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
