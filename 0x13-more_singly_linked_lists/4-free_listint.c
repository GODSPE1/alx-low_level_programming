#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free the node allocated space
 * @head: pointer to a poiner that points to the head of a linked list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *init;

		if (head == NULL)
			return (0);

	while (head != NULL)
	{
		init = head;
		head = head->next;
		free(init);
	}
}

