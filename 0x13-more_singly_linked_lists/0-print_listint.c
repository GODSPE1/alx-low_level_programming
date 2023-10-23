#include <stdio.h>
#include "lists.h"
/**
 * print_listint  - print all the elements of the listint_t list
 * 
 * Return: the number of nodes on success
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
