#include "main.h"

/**
 * *_memset - function
 * @s: string
 * @b: character
 * @n: variable
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

		while (n--)
		{
			*p++ = b;
		}
	return (s);
}
