#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free dynamically allocated space of two dimensional array
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	for  (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);

	return (0);
}
