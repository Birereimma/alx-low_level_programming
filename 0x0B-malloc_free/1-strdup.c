#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: string to allocate
 * Return: a pointer to a new string
 * which is a duplicate of the string str
 * NULL if str = NULL
 * NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *ccc;
	int i, j;

	if (str == NULL)
	return (NULL);

	i = 0;

	while (str[i] != '\0')
		i++;
	ccc = malloc(sizeof(char) * (i + 1));

	if (ccc == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		ccc[j] = str[j];
	return (ccc);
}
