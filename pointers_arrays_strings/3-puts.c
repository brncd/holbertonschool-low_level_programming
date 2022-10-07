#include "main.h"
/**
 * _puts - function
 * : int
 * Return: count
 */
void _puts(char *str)
{
  int count;

  for(count = 0; str[count] != '\0'; count ++)
  {
    _putchar(str[count]);
  }
  _putchar('10');
}
