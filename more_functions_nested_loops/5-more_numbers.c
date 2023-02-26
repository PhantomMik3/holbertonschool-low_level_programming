#include "main.h"

/**
 * more_numbers - Entry
 * new line
 */

void more_numbers(void)
{
	int ll;
	int lk;

	for (ll = 0; ll <= 9; ll++)
	{
		for (lk = 0; lk <= 14; lk++)
		{
			if (lk >= 10)

				_putchar('1');
			_putchar(lk % 10 + '0');
		}

	_putchar('\n');
	}
}
