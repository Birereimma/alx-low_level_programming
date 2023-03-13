#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char
 * @size: array sie
 * @c: character
 * Return: NULL if size = 0,
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for  (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
