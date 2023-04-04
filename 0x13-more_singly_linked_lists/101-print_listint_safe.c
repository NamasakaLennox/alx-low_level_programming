#include "lists.h"
#include <stdio.h>

/**
 * find_loop - finds where the loop begins
 * @head: first element of the list
 *
 * Return: the address of where the loop begins
 */
listint_t *find_loop(listint_t *head)
{
	listint_t *check, *last = head;

	if (head == NULL)
		return (NULL);

	while (last)
	{
		if (last == last->next) /* loops within itself */
			return (last);
		for (check = head; check != last; check = check->next)
		{
			if (check == last->next)
				return (last->next);
		}
		last = last->next;
	}
	return (NULL);
}

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
	listint_t *loop;
	int flag = 1;
	size_t nodes = 0;

	if (head == NULL)
		exit(98);

	loop = find_loop((listint_t *)head);

	while ((head != loop || flag) && head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head == loop)
			flag = 0;
		head = head->next;
		nodes++;
	}

	if (loop)
		printf("-> [%p] %d\n|", (void *)head, head->n);
	return (nodes);
}
