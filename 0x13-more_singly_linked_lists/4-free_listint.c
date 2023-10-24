#include <stdio.h>
#include "lists.h"
/**
 * free_listint - free the node allocated space
 * @head: head of a linked list
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *init;

	while (head != NULL)
	{
		init = head;
		head = head->next;
		free(init);
	}
}

