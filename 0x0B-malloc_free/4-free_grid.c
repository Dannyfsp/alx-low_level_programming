#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * function that frees 2 dimensional grid previously created
 * @grid: grid to be freed
 * @height: height of matrix
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
