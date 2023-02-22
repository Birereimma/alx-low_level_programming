#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: being the number
 * Return: value of the last digit
 */

int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
		ld *= -1;
	_putchar('0' + ld);
	return (0);
}
