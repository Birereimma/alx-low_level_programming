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
	char *result;

/* Handle NULL strings as empty strings
 */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

/* Adjust n if it is greater than or equal to the length of s2
 */
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

/* Allocate memory for the concatenated string
 */
	result = malloc(strlen(s1) + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}

/* Add null terminator to the end of the result
*/
	result[strlen(s1) + n] = '\0';

	return (result);
}
