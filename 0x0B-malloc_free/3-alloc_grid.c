#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - pointer to 2 dimensional array of integers
 * @height: row of the array
 * @width: columns of the array
 * Return: returns pointer to the dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **dim_arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	dim_arr = (int **)malloc(height * sizeof(int *));
	if (dim_arr == NULL)

		return (NULL);

	for (i = 0; i < height; i++)
	{
		dim_arr[i] = (int *)malloc(width * sizeof(int));
		if (dim_arr[i] == NULL)
		{
			for  (j = 0; j < i; j++)
				free(dim_arr[j]);
			free(dim_arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			dim_arr[i][j] = 0;
	}
	return (dim_arr);
}
