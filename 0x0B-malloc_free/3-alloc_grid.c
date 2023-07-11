#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates a 2-dimensional grid of integers
 * @width: The width of the grid
 * @height: The height of the grid
 * Return: A pointer to the allocated grid, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grd;

	if (!width || !height)
	{
		return (NULL);
	}
	grd = (int **)malloc(height * sizeof(int *));
	if (!grd)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grd[i] = (int *)malloc(width * sizeof(int));
		if (!grd[i])
		{
			for (j = 0; j < i; j++)
			{
				free(grd[j]);
			}
			free(grd);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grd[i][j] = 0;
		}
	}
	return (grd);
}
