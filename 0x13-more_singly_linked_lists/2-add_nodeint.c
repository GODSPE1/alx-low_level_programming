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
	listint_t *newnode;

	if (*head == NULL)
	{
		return (NULL);
	}
	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	{
		newnode->n = n;
		newnode->next = NULL;
		newnode->next = *head;
		*head = newnode;
	}
	return (newnode);
}
