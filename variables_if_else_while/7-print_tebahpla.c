#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main, return
 * Return: Always (0) (succesful)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
