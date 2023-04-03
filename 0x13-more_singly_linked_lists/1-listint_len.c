#include "lists.h"

/**
 * listint_len - gets the number of elements in a list
 * @h: first element in the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
