#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat -  concatenates two strings
 * @s1: character 1
 * @s2: caharacter 2
 * @n: integer n
 * Return: NULL If the function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sult;
	unsigned int lens1, lens2, lensult, i;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lens1 = 0; s1[lens1] != '\0'; lens1++)
		;
	for (lens2 = 0; s2[lens2] != '\0'; lens2++)
		;

	if (n >= lens2)
	{
		n = lens2;
	}

	lensult = lens1 + n;
	sult = malloc(lensult + 1);

	if (sult == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lensult; i++)
		if (i < lens1)
			sult[i] = s1[i];
		else
			sult[i] = s2[i - lens1];

	sult[i] = '\0';

	return (sult);
}
