#include "lists.h"

/**
 * get_nodeint_at_index - get a node at a specific index
 * @head: address of the first element
 * @index: index of the element to get
 *
 * Return: address of the nth element
 * NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *node = head;

	while (position < index)
	{
		node = node->next;
		position++;
		if (node == NULL && position < index)
			return (NULL);
	}

	return (node);
}
