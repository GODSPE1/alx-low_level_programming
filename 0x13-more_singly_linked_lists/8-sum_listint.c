#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - calculate the sum all the data of a linked list
 * @head: the head of a linkedlist
 *
 * Return: the sum or 0 if failed
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	else
	{
		return (0);
	}
	return (sum);
}

