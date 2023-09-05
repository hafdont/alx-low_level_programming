#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocate a 2D arrat of integers
 * @width: The width of the grid.
 * @height: the height of the grid
 *
 * Return: A pointer to the @d array, or Null when no memory is allocated
 */

int **aloC_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));
	if (grid ==NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)
		{
			for (j = 0;) j < i; j++(
					free(grid[j]);
					free(grid[j]);
					return(NULL)

