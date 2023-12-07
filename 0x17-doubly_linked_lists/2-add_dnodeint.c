#include "lists.h"
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp  = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->next = *head;
	temp->n = n;
	temp->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = temp;
	}
	*head = temp;

	return (temp)
}
}
