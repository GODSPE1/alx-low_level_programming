#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: least number in the array
 * @max: largest number in the array
 * Return: pointer to the memory address
 */
int *array_range(int min, int max)
{
	int num, i, *p;

	if (min > max)
		return (NULL);

	num = ((max - min) + 1);


	p = malloc(num * sizeof(num));
	if (p == NULL)
	{
		printf("Insufficient memory space");
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		p[i] = (min + i);

	}

	return (p);
}
