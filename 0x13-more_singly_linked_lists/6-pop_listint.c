#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - removes the head node and return the dat
 * @head: pointer to pointer that points to the head of a list
 *nn
 * Return: the data of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = 0;

	if (*head == NULL)
		return (0);
	i = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;

	return (i);
}
