#include "lists.h"
/**
 * list_len - a function that counts the number of elements in a list
 * @h: pointer to a structure
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0 ;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
