#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints binary
 * @n: the number to be operated on
 * Return: sucess
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
