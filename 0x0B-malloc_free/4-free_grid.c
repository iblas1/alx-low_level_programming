#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* free_grid - to concatenate a string to an allocated memory
* @grid: destination string
* @height: source string
* Return: pointer to the array created
*/

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height == 0)
	return;

	for (i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
