#include <stdio.h>
#include "main.h"

/**
 * print_array - print elements of an array
 * @n: array elements var
 * @a: pointer var
 * Return: Always (0)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)

	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
