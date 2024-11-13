#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D grid previously created for alloc_grid
 * @grid: grid of alloc grid
 * @height: height of the grid
 * Return: Void
 */

void free_grid(int **grid, int height)
{
int i = 0;

if (grid == NULL)
	return;
while (i < height)
{
	free(grid[i]);
	i++;
}
	free(grid);
}
