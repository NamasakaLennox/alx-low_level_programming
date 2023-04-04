#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a list safely
 * @head: address of the first element
 * Description: goes through a list only once
 *
 * Return: number of nodes
 * exits with status 98 if fail
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *next = head;
	size_t nodes = 0;

	if (head == NULL)
		exit(98);

	while (next)
	{
		current = next;
		nodes++;
		next = current->next;
		/* finding the loop */
		/* since we add nodes at the beginning, address of next */
		/* should always be less than the previous */
		if (current < next)
		{
			printf("-> [%p] %d\n", (void *)next, next->n);
			break;
		}
		else if (next < current)
			printf("[%p] %d\n", (void *)current, current->n);
	}
	return (nodes);
}
