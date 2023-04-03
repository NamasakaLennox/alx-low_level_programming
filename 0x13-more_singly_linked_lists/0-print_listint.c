#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints a list of integers
 * @h: address of the first element
 *
 * Return: the number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}
