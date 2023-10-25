#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the position of a node in a lis
 * @head: head to a linked list
 * @index: the indext of the node
 * Return: the postion or NULL on failure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (index == 0)
	{
		return (head);
	}
	temp = head;
	while (i < index - 1 && temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	if (i < index - 1)
	{
		return (NULL);
	}

	return (temp);
}
