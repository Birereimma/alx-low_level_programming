#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: SUccess
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer;

	answer = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		answer = (answer << 1) + (*b - '0');
	}
	return (answer);
}

