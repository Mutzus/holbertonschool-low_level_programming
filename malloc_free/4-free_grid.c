#include <stdlib.h>

/**
 * free_grid - Frees the memory of a 2-dimensional grid.
 * @grid: The pointer to the 2D array.
 * @height: The height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
