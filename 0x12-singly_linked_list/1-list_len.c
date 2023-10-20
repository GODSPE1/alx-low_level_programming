#include "lists.h"
/**
 * list_len - a function that counts the number of elements in a list
 * @h: pointer to a structure
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	list_t *temp;
	unsigned int count = 0;

	temp = h;
	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
