#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension
 * Description: frees memory
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
	int M;

	for (M = 0; M < height; M++)
	{
		free(grid[M]);
	}
	free(grid);
}
