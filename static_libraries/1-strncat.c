#include "main.h"

/**
 * _strncat - connect 2 strings with n bytes
 * @dest: string var
 * @src: string var
 * @n: integer var
 * Return: Always (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0' && n--)
	{

		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
