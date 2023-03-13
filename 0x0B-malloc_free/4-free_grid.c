#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees allocated memory
 * @grid: the array
 * @height: height of array
 *
 * Return: no value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
