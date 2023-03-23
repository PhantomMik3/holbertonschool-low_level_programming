#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - pass elements to function that will be executed
 * @array: passed array of integers
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array != NULL && action != NULL)
	{
		for (c = 0; c < size; c++)
			action(array[c]);
	}
}
