#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second one
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result != 0)
	{
		count = count + (result & 1);
		result >>= 1;
	}
	return (count);
}
