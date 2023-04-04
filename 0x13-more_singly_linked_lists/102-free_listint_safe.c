#include "lists.h"

/**
 * free_listint_safe - frees a list safely
 * @h: address of the head address
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next = *h;
	size_t nodes = 0;

	while (next)
	{
		nodes++;
		current = next;

		next = next->next;
		if (current < next)
			break;
		free(current);
	}
	*h = NULL;

	return (nodes);
}
