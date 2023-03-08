#include "main.h"

/**
 * _puts - print a string
 * @str: var
 */

void _puts(char *str)
{
		for (; *str != '\0'; str++)
		{
			_putchar(*str);
		}
		_putchar('\n');
}
