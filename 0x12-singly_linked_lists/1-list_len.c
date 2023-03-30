#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: address of the first element
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
