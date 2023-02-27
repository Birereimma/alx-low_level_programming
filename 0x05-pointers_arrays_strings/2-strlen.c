#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string
 * @str: the string to get the lengh of
 *
 * Return: the length of string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}


