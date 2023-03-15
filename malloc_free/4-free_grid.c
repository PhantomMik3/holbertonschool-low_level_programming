#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - free memory previously created for a 2D array
 * @grid: int double pointer to array
 * @height: int var for rows
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	{
		free(grid[idx]);
	}
	free(grid);
}
