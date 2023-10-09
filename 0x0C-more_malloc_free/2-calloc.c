#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory of array using malloc
 * @nmemb: total number of elemnts
 * @size: size of array
 * Return: pointer to memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int a;

	if (nmemb == 0 || size ==  0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)

		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)(ptr) + a) = 0;
	}

	return (ptr);
}
