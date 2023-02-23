#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 14; x++)
	{
		for (y = 0; y <= 10; y++)
			if (x > 14)
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
			}
		_putchar('\n');
	}
}
