#include "variadic_functions.h"
#include <stdio.h>
#include "stdarg.h"

/**
 * print_all -  prints anything
 * @format: any argument format
 * Return: success
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
		}
		i++;
		if (format[i] != '\0' && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
		{
			printf(",");
		}
	}
	va_end(args);
	printf("\n");
}



