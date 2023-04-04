#include "lists.h"

/**
 * find_listint_loop - finds where the loop begins
 * @head: address of the first node
 *
 * Return: where the loop starts
 * NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *check, *last = head;

	if (head == NULL)
		return (NULL);

	while (last)
	{
		if (last == last->next)
			return (last);

		for (check = head; check != last; check = check->next)
			if (check == last->next)
				return (last->next);
		last = last->next;
	}

	return (NULL);
}
