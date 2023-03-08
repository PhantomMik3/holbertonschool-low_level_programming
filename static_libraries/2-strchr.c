#include "main.h"

/**
 * _strchr - locating a character in a string
 *@s: string being searched
 *@c: character being looked for
 *Return: null byte
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
