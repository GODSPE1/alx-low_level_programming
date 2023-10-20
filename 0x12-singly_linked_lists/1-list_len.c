#include "lists.h"
/**
 * list_len - a function that counts the number of elements in a list
 * @h: pointer to a structure
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t count;
	const list_t *temp;

	if (h == NULL)
		return (0);

	count = 0;
	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
