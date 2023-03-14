#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_array - create array of chars
 * @size: size of array
 * @c: specific char
 * Return: pointer to array if succesful
 *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		ptr[a] = c;
	}

	return (ptr);
}
