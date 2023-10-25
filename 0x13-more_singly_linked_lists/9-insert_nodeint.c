#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer that points to a list
 * @idx: indexx of the list
 * @n: to transverse
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	temp = head;
	while (n < idx)
	{
		temp = temp->next;
		n++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
}
