#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of characters
 * @size: array size
 * @c: character to initialize the array
 * Return: pointer to funntion
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(char));
	if (ptr !=  NULL)
	{
		for (i = 0; i < size; i++)
			ptr[i] = c;
	}
	else
	{
		return (NULL);
	}

	return (ptr);
}
