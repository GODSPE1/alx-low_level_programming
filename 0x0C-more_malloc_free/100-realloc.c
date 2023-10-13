#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - allocates a memory block using malloc and free
 * @ptr: previously allocated memory block
 * @old_size: old memory size in bytes
 * @new_size: new size of the memory block
 * Return: pointer to the new size if successful
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr == NULL);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (new_ptr);
	}
	else
	{
		new_ptr = malloc(new_size);
		if (new_ptr != NULL)
		{
			for (i = 0; i < old_size; i++)
				*((char *)new_ptr + i) = *((char *)ptr + i);
			free(ptr);
			return (new_ptr);
		}
		else

			return (NULL);

	}
