#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: variable contains string
 * Return: (0) Always
 */

void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
