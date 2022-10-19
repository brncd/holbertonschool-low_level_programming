#include <stdio.h>
/**
 * main - main function
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	argv[0] = 0;
	printf("%d\n", argc - 1);
	return (0);
}
