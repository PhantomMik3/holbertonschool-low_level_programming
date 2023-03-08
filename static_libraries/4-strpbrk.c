#include "main.h"

/**
 * *_strpbrk - searches for any set of bytes
 * @s: string to be searched
 * @accept: other string
 * Return: pointer to bytes
 */

char *_strpbrk(char *s, char *accept)
{
	char *a, *b;

	for (a = s; *a != '\0'; a++)
	{
		for (b = accept; *b != '\0'; b++)
		{
			if (*a == *b)
			{
				return (a);
			}
		}
	}
	return ('\0');
}
