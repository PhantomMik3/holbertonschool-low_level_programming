#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * array_range - creates array of integers
 * @min: lesser value int
 * @max: greater value int
 * Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int *ray;
	int L;

	if (min > max)
		return (NULL);

	ray = malloc((max - min + 1) * sizeof(int));

	if (ray == NULL)
		return (NULL);

	for (L = 0; max - min >= L; L++)
		ray[L] = min + L;

	return (ray);
}
