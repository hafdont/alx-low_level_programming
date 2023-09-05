#include <stdlib.h>

/**
 * free_grid - Fre'e's the memory allocated for a 2D grid.
 * @grid: The pointer to the grid
 * @height: the height (number of rows) of the grid
 */

void free_grid(int **grid, int height)
{
	int i;


	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
		{
			free(grid[i]);
			grid[i] = NULL;
		}
	}
	free(grid);
}
