#include "list.h"
/**
 * dlistint_len - a function that counts the number of elements in a list
 * @h: pointer to a structure
 *
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_len *temp;

	if(h == NULL)
		return (0)

			count = 0;
	temp = h;	
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}

