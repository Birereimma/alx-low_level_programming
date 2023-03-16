#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* array_range - creates an array of integers
* @min: minimum value
* @max: maximum value
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{       int *ar;
	int j;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar == NULL)
		return (NULL);
	for (j = 0; min <= max; j++, min++)
		ar[j] = min;
	return (ar);
}
