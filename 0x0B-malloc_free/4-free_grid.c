#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2d integer grid previously created by alloc_grid
 * Description: a function that frees a 2 dimensional grid
 * @grid: pointer to array of ints
 * @height: number of rows
 * Return: nothing, frees memory
 **/

void free_grid(int **grid, int height)

{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
