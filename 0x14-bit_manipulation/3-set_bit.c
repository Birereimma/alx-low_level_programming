#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the long integer to chnage
 * @index: index of the bit to set to 1
 * Return: 1 for sucees, -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	val = 1UL << index;
	*n |= val;
	return (1);
}
