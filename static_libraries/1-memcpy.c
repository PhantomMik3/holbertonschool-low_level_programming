#include "main.h"

/**
 * _memcpy - function that memory copy
 * @dest: destination to be copied
 * @src: string being copied
 * @n: variable
 * Return: (dest) always
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pdest = dest;

	char *psrc = src;

	unsigned int a;

		for (a = 0; n > a; a++)
		{
			*pdest++ = *psrc++;
		}
	return (dest);
}
