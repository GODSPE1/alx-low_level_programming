#include "search_algos.h"
#include <stdio.h>
/**
 * interpolation_search - function that searches for a value in a
 * sorted array of integers using the Interpolation search algorithm.
 * @array: pointer to the first element of the array to search
 * @size: The number of elements in array
 * @value: The value to search
 *
 * Return: if array is NULL or value not present, your function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	int high = size  - 1;
	int low = 0;

	while (value >= array[low] && value <= array[high] && low <= high)
	{
		size_t pos = low + (((double)(high - low)
		/ (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
