#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: a pointer to a list_t structure
 *
 * Return: the count of node at the end of the function
 */
size_t print_list(const list_t *h)
{
	unsigned int  count;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
