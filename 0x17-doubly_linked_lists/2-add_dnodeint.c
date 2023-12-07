#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp  = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	else
	{
	temp->next = NULL;
	temp->n = n;
	temp->prev = NULL;
	temp-next = *head;
	*head->prev =temp;
	*head = temp;

	return (*head)
	}
}
