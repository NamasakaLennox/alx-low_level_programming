#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a certain index
 * @head: address of first element
 * @idx: the index to insert
 * @n: the data element
 *
 * Return: address of the new node
 * NULL if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *next_elem = *head;
	unsigned int position = 0;

	new = malloc(sizeof(listint_t)); /* memory for new element */
	if (!new)
	{
		free(new);
		return (NULL);
	}

	while (position < idx - 1) /* get to the postion to insert */
	{
		next_elem = next_elem->next;
		position++;
		if (next_elem == NULL && idx > position + 1) /* end of list */
			return (NULL);
	}
	new->n = n;
	new->next = next_elem->next;
	next_elem->next = new;

	return (new);
}
