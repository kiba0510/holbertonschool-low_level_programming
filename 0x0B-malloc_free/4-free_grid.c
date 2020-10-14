#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees 2 dimension array
 *@grid: 2D grid
 *@height: height value of the grid
 *Return: nothing
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
