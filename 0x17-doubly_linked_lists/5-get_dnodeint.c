#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a specific index
 * @head: first node in the list
 * @index: the index of the element to get
 *
 * Return: returns the node fetched, NULL if error
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *temp = head;

	while (counter < index)
	{
		if (temp)
			temp = temp->next;
		else
			break;
		counter++;
	}

	return (temp);
}
