#include <stdlib.h>

/**
 * free_grid - frees a 2D grid from the memory
 * @grid: the grid array to be freed
 * @height: the height of the grid array
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
