#include "main.h"

/**
 * _memcpy - copying a memory area
 *@dest: where itwill be copied
 *@src: where it will be copied
 *@n: number of byte
 *Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
