#include "search_algos.h"

/**
 * recursive_search - function that searches recursively for a value in
 * a sorted array of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search
 * @size: The number of elements in array
 * @value: The value to search
 *
 * Return: if array is NULL or value not present, your function must return -1
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;


	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));
	half++;

	return (recursive_search(array + half, size - half, value) + half);

}


/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm.
 * @array: pointer to the first element of the array to search
 * @size: The number of elements in array
 * @value: The value to search
 *
 * Return: if array is NULL or value not present, your function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
