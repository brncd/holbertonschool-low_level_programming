#include "main.h"
/**
* print_alphabet_x10- Entry point
*
*/
void print_alphabet_x10(void)
{
	char letter = 'a';
	int count = 0;

	while (letter <= 'z')
	{
		for (count = 0 ; count < 10 ; count++)
		{
			_putchar(letter);
			_putchar('\n');
		}
	}
}
