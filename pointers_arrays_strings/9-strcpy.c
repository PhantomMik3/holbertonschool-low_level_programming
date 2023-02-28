#include "main.h"

/**
 * _strcpy - copie string inside pointer to other pointer
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: Always (0)
 */

char *_strcpy(char *dest, char *src)
{
	char *p  = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
