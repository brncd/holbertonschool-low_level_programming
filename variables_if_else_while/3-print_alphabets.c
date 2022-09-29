#include <stdio.h>
/**
* main- Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet;
	char Alphabet;

	for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{	
	putchar(alphabet);
}

	for (Alphabet = 'A' ; Alphabet <= 'Z'; Alphabet++)
{
	putchar(Alphabet);
}	
	putchar ('\n');
	return (0);
}
