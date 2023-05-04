#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to work on
 * @index: inde of the bit to be changed
 * Return: 1 for success. -1 for fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maske;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	maske = ~(1UL << index);
	*n &= maske;
	return (1);
}
