#include "main.h"

/**
 *rot13 - encodes a strin using rot13
 * @n: pointer to the string
 * Return: *n
 */

char *rot13(char *n)
{
	int i, j;
	char imma1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char immarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == imma1[j])
			{
				n[i] = immarot[j];
				break;
			}
		}
	}
	return (n);
}
