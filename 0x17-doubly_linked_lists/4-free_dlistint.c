#include "lists.h"
/**
 * free_dlistint - free list
 * @head: pointer to head of doubl linkedlis
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list;

	while (head)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
