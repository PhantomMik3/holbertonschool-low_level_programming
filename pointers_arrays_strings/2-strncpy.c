#include "main.h"

/**
 * _strncpy - copy string
 * @dest: string var
 * @src: string var
 * @n: int string
 * Return: Always (0)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
	{
		dest[e] = src[e];
	}
	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}
	return (dest);
}

