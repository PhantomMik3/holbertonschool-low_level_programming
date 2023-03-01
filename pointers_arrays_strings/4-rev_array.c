#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer var
 * @n: elements of array
 * Return: Always void
 */

void reverse_array(int *a, int n)
{
	int r, l, temp;

	for (r = 0, l = n - 1; r < l; r++, l--)
	{
		temp = a[r];
		a[r] = a[l];
		a[l] = temp;
	}
}
