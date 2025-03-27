#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid allocated by alloc_grid
 *
 * @grid: Pointer to the 2D array
 *
 * @height: Number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
