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

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t)); /* memory for new element */
	if (!new)
	{
		free(new);
		return (NULL);
	}

	while (position < idx - 1 && next_elem) /* get to index to insert */
	{
		next_elem = next_elem->next;
		position++;
	}

	new->n = n;
	if (idx == 0) /* start of list */
	{
		new->next = *head;
		*head = new;
	}
	else if (position + 1 == idx) /* any other position */
	{
		new->next = next_elem->next;
		next_elem->next = new;
	}
	else
	{
		free(new);
		return (NULL);
	}

	return (new);
}
