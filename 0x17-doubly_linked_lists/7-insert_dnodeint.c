#include "lists.h"
/**
 * insert_dnodeint_at_index - cinserts a new node at a given position
 * @h: head of node
 * @idx: index
 * @n: value 
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode = NULL;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = NULL;

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	*head = temp;

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	if (temp->next == NULL)
	{
		temp->next = newNode;
		newNode->prev = temp;
	}
	else 
	{
		temp2 = temp->next;
		temp->next = newNode
			temp2->prev = newNode;
		newNode->next = temp2;
		newNode->prev = temp;
	}
	return (*h);
}
