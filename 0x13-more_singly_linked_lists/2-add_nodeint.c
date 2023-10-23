#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - insert node at the beginning
 * @head: a pointer to a pointer to a struct node
 * @n: data in the linked list
 *
 * Return: the address of the new node or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}
