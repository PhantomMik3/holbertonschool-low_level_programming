#include "main.h"

/**
 * print_binary - prints a converted number in binary
 * @n: numbers to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int zeros = 1;

	for (; mask != 0;)
	{
		if (n & mask)
		{
			zeros = 0;
			putchar('1');
		}
		else if (!zeros)
		{
			putchar('0');
		}
		mask >>= 1;
	}
	if (zeros != 0)
	{
		putchar('0');
	}
}
