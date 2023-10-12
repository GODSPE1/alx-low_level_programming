#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: an array of integers
 * @size: the number of elements in the array
 * @cmp: function pointer
 * Return: the index of the element on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (1);

	}

	return (-1);
}
