#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: elements
 * @size: size in bytes
 *  Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pt;
	unsigned int S;

	if (nmemb == 0 || size == 0)
		return (NULL);

	S = nmemb * size;
	pt = malloc(S);

	if (pt == NULL)
		return (NULL);
	memset(pt, 0, S);
	return (pt);
}
