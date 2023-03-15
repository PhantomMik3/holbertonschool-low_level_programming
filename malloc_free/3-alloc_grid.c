#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function allocates memory for pointer to 2d array
 * @width: row array
 * @height: column array
 * Return: pointer to a pointer that points to array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int idxh, idxw;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (idxh = 0; idxh < height; idxh++)
	{
		ptr[idxh] = malloc(width * sizeof(int));

		if (ptr[idxh] == NULL)
		{
			for (idxw = 0; idxw < idxh; idxw++)
			{
				free(ptr[idxw]);
			}
			free(ptr);
			return (NULL);
		}

		for (idxw = 0; idxw < width; idxw++)
		{
			ptr[idxh][idxw] = 0;
		}
	}

	return (ptr);
}
