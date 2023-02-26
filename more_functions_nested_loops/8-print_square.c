#include "main.h"

/**
 * print_square - entry point
 * @size: siz of square stored in var
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, j;

		for (b = 0; b < size; b++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
