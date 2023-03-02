#include "main.h"

/**
 * *string_toupper - lowercase to uppercase
 * @s: variable
 * Return: Always (s)
 */

char *string_toupper(char *s)
{
	int e;

	for (e = 0; s[e] != '\0'; e++)
	{
		if (s[e] >= 'a' && s[e] <= 'z')
		{
			s[e] -= 32;
		}
	}
	return (s);
}
