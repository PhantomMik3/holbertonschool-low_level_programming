#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: var
 */

void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	for (int i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
