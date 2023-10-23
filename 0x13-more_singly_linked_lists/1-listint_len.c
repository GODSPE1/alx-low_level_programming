#include <stdio.h>
#include "lists.h"
/**
 * listint_len - calculates the number of elements in a linked list
 * @h: head node
 *
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while  (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);

}
