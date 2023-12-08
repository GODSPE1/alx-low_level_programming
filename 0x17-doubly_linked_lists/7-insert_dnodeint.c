#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/**
 * insert_dnodeint_at_index - cinserts a new node at a given position
 * @h: head of node
 * @idx: index
 * @n: value
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	
	if (*h == NULL)
		return (NULL);
	

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	dlistint_t *temp;

	temp = *h;
	dlistint_t *temp2 = NULL;

	if (idx == 0)
	{
		newNode->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = newNode;
		}
		*h = newNode;
		return (newNode);
	}

	while (idx != 0)
	{
		if (temp == NULL)
		{
			free(newNode);
			return (NULL);
		}
		temp = temp->next;
		idx--;
	}

	temp2 = temp->prev;
	temp2->next = newNode;
	newNode->prev = temp2;
	newNode->next = temp;
	if (temp != NULL)
	{
		temp->prev = newNode;
	}

	return (newNode);
}
