#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - main description
 * @grid: width of array
 * @height: height of array
 *
 * Return: 0.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height ; i++)
		free(grid[i]);
	free(grid);

}
