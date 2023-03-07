#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			return (s);
		}
		s++;
	}
		return ('\0');
}


