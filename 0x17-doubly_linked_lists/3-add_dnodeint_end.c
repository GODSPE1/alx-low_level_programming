#include "lists.h"
/**
 * add_dnodeint_end - add node at the en
 * @n: value
 *
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;

	newNode->n = n;
	newNode->next = NULL;

	if (head == NULL || *head ==NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return newNode;
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;

	return (*head);

}
