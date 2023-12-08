#include "lists.h"
/**
 * sum_dlistint - addition of all the data in linked list
 * @header: pointer to the head of the linked list
 * Return: the number of all, if lists is empty return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	size_t sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
