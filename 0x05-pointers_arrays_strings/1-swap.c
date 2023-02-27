#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: int  a to be swapped with int b
 * @b: int b to be swapped with int a
 * Return: 0
 */

void swap_int(int *a, int *b)
	/*the function that swaps the values of two integers.*/
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
