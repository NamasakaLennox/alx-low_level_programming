#include "lists.h"

/**
 * print_dlistint - prints a double linked list
 * @h: head of the linked list
 *
 * Return: returns the number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	dlistint_t *temp = (dlistint_t *)h;

	if (h == NULL)
		return (0);
	while (temp)
	{
		nodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (nodes);
}
