#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at given index
 * @n: long integer
 * @index: index
 * Return: Sucees
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	result = 1UL << index;
	return ((n & result) != 0);
}
