#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a specific index
 * @h: address of the first element
 * @idx: the index of the position to add
 * @n: the number to add
 *
 * Return: address of the new node or NULL if unsuccessful
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new, *previous;
	unsigned int count = 0;

	if (h)
	{
		if (idx == 0) /* add at the beginning */
		{
			new = add_dnodeint(h, n);
			return (new);
		}
		temp = *h;
		while (temp && count < idx) /* get addr of position to add */
		{
			count++;
			previous = temp;
			temp = temp->next;
		}
		if (count == idx) /* if address is reached before list ends */
		{
			if (temp == NULL) /* add node at the end */
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			/* otherwise add node in the middle */
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (NULL);
			new->n = n;
			new->next = temp;
			new->prev = temp->prev;
			temp->prev = new;
			previous->next = new;
			return (new);
		}
	}
	return (NULL);
}
