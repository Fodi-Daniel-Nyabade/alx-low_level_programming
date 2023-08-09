#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - allocates a grid, make space and free space
 * @grid: a parameter passed to the function
 * @height: a parameter passed to the function
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
