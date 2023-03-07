#include "main.h"

/**
 * _strlen_recursion - return length of string
 * @s: string variable
 * Return: Always 0
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
