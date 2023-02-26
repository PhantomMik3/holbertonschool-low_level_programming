#include "main.h"

/**
 * print_diagonal - entry
 * @n: xontains how many times \ is gonna be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int lg, bt;

		for (lg = 0; lg < n; lg++)
		{
			for (bt = 0; bt < n; bt++)
			{
				if (bt == lg)
					_putchar('\\');
				else if (bt < lg)
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
}
