#include "main.h"

/**
 * print_number - a function that prints an integer
 *@n: the integer to print
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		_putchar(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}

