#include "main.h"

/**
 * swap_int - function that swaps the value of 2 integers
 * @a: var
 * @b: var
 */

void swap_int(int *a, int *b)
{

	int prot = *a;
	*a = *b;
	*b = prot;
}
