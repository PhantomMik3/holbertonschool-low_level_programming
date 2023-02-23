#include "main.h"
/**
 * print_alphabet_x10 - int char while
 * nested for loop
 * print value of jk
 */

void print_alphabet_x10(void)
{
	int lk;
	char jk;

	for (lk = 0; lk <= 9; lk++)
	{
		for (jk = 'a'; jk <= 'z'; jk++)
		_putchar(jk);
	_putchar('\n');
	}
}

