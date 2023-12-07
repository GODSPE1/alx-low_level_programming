#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list
 * @h: a pointer to a list_t structure
 *
 * Return: the count of node at the end of the function
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		h = h->next;
		count++;
	}

	return count;
}
