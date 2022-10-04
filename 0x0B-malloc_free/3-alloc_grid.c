#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2d integer grid
 * Description: a function that returns a pointer
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to grid or null
 **/

int **alloc_grid(int width, int height)

{
	int **grid, k, j;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		grid[k] = malloc(sizeof(int) * width);
		if (grid[k] == NULL)
		{
			while (--k >= 0)
				free(grid[k]);
			free(grid);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (j = 0; j < width; j++)
			grid[k][j] = 0;
	}
	return (grid);
}
