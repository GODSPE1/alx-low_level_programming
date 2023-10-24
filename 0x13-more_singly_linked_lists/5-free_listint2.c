#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - free the nodes in a list and set it to null.
 * @head: pointer to pointer that points to the head of a linked list listint_t
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
