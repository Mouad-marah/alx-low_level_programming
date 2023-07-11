#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function declaration
 *
 * @grid: argument
 * @height: argument
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
