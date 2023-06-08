#include "main.h"
/**
 * alloc_grid - function that returns ptr to a 2D array of integers.
 * @width: num of colomuns
 * @height: num of rows
 * Return: NULL or grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height); /* allocates mem for the arr*/
	if (grid == 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width); /* allocates memFor each row */
		if (grid[i] == 0)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
