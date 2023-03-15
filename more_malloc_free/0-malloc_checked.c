#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function gives status value of 98 if malloc unsuccesful
 * @b: unkown value size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
