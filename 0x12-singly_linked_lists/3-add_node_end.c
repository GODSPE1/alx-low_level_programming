#include <stdio.h>
#include "lists.h"
/**
 * aadd_node_end - add node to the list
 * @str: value to the node
 *
 * Return: Return the address of the new node :wq

 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));
	temp->str = str;
	temp->next = NULL;
	if (*head != NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	return (head)
}
