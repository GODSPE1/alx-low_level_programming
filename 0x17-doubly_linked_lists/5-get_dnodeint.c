#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer of the head of the list
 * @index of node to find
 * Return: the nth index, return NULL if the nodes does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
        dlistint_t *newnode;
        unsigned int count;

        if (head == NULL)
                return (NULL);

        while (head->prev != NULL)
                head = head-prev;

        newnode = head;

        while (newnode != NULL)
        {
                if (count == index)
                {
                        return (newnode);
                }
                count++;
                newnode = newnode->next;
        }
        return (NULL);
	
}
