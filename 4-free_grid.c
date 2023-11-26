#include <stdlib.h>

/**
 * free_grid - Frees the memory of a 2-dimensional grid.
 * @grid: The pointer to the 2D array.
 * @height: The height of the grid.
 */
void free_grid(int **grid, int height) {
    int i;

    /* Check if the grid pointer is not NULL */
    if (grid != NULL) {
        /* Free each row */
        for (i = 0; i < height; i++)
            free(grid[i]);

        /* Free the array of pointers to rows */
        free(grid);
    }
}
