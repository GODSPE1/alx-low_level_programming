#include <stdio.h>
/**
 * array_iterator - iterates through the array
 * @array: A pointer to an array of integers.
 * @size: The number of elements in the array
 * @action: A function pointer that can point to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if  (arry != NULL || action != NULL)
		{
			action(array[i]);
		}

	}

}
