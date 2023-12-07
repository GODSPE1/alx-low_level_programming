#include "lists.h"
/**
 * add_dnodeint - a function that counts the number of elements in a list
 * @h: pointer to a structure
 * @n: value
 * Return: the address of the new elements, or NULL if failed
 */
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

	return (temp);
}
