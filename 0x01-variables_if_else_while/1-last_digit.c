#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry of the program
 *
* This program generates a random num and prints different value and
 *
* determine whether the last digit is either less, greater than 5
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	if (x > 5)
	{
		printf("Last digit of %d is %d and is greater then 5\n", n, x);
	}
			if (x == 0)
			{
				printf("Last digit of %d is %d and is 0\n", n, x);
			}
					if (x < 6 && x != 0)
				{
						printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
					}

	return (0);
}
