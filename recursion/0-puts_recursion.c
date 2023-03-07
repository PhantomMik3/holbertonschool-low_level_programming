#include "main.h"

/**
 * _puts_recursion - function that prints string with recursion
 * @s: string variable
 * void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	_puts_recursion(s + 1);
}
