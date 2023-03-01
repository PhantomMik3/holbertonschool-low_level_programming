#include "main.h"

/**
 * _strcat - connect two strings together
 * @dest: string var
 * @src: string var
 * Return: Always (dest)
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p++ = *src++;
	}


	*p = '\0';
	return (dest);
}

