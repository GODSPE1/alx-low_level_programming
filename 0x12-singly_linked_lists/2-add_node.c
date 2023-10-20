#include "lists.h"

/**
 * add_node - adds newnode to the list
 * @head: current head of the list
 * @str: string to be stored in the new node
 *
 * Return: address of the new node on success
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *newnode;

	while (str[len] != '\0')
		len++;

	if (head == NULL)
		return (0);

	newnode = (list_t *)malloc(sizeof(list_t));
	if (newnode != NULL)
	{
		newnode->str = strdup(str);
		newnode->len  = len;
		newnode->next = *head;
		*head = newnode;
	}
	else 
		return (NULL);

	return (newnode);
}
