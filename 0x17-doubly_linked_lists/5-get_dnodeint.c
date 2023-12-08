#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list.
 * @head: pointer of the head of the list
 * @index of node to find
 * Return: the nth index, return NULL if the nodes does not exit
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
<<<<<<< HEAD
	dlistint_t *newnode;
	unsigned int count;
=======
        dlistint_t *newnode;
        unsigned int count;
>>>>>>> c45f2ac7b4dec0ecf615d1ec92e1f0cc0ae25bb7

        if (head == NULL)
                return (NULL);

<<<<<<< HEAD
	while (head->prev != NULL)
		head = head-prev;

	newnode = head;

	while (newnode != NULL)
	{
		if (count == index)
<<<<<<< HEAD
		{
			return (newnode);
		}
		count++;
		newnode = newnode->next;
=======
			break;
		head = head->next;
>>>>>>> 212f33f48a81f3445789be3703edacd9b8de01a9
	}
	return (head);
=======
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
	
>>>>>>> c45f2ac7b4dec0ecf615d1ec92e1f0cc0ae25bb7
}
