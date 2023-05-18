#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: the first element in the list
 *
 * Return: returns the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *temp = (dlistint_t *)h;

	while (temp)
	{
		nodes++;
		temp = temp->next;
	}

	return (nodes);
}
