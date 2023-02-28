#include "main.h"

/**
 * _strlen - length of a string
 * @s: var
 * Return: (0) Always
 */

int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	return (a);
}

