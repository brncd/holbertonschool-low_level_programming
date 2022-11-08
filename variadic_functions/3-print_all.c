#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * 
*/
void print_all(const char * const format, ...)
{
	va_list vlist;
	int i = 0;
	char *str;

	va_start (vlist, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(vlist, int));
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				break;
			case 'i':
				printf("%d", va_arg(vlist, int));
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				break;
			case 'f':
				printf("%f", va_arg(vlist, double));
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				break;
			case 's':
				str = va_arg(vlist, char *);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				if (format[i + 1] != '\0')
				{
					printf(", ");
				}
				break;
		}
		i++;
	}
	printf("\n");
	va_end(vlist);
}