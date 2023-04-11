#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return : a pointer to the array or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	/* check for invalid arguments */
	if (width  <= 0 || height <= 0)
		return (NULL);

	/* allocate memory for the array of pointers */
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	/* allocate memory for each row and initialize to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/* free the allocated memory if allocation fails */
			while (i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
