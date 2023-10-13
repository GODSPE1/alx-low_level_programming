#include "function_pointers.h"
/**
 * array_iterator - iterates through the array
 * @array: A pointer to an array of integers.
 * @size: The number of elements in the array
 * @action: A function pointer that can point to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if  (array == NULL || action == NULL)
		return;

	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}


}
