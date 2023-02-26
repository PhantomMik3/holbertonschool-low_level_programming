#include "main.h"

/**
 * print_line - start
 * @n: variable
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int f;
			for (f = 1; f <= n; f++)
			{
				_putchar('_');
			}

			_putchar('\n');
	}
}
