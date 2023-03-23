#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - check for passed integer
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return:-1 if anything is NULL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int c;

	if (cmp && array && size > 0)
	{
		for (c = 0; c < size ; c++)
		{
			if (cmp(array[c]) != 0)
			return (c);
		}
	}

	return (-1);
}
