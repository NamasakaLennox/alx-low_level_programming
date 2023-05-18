#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @head: address of the first element in the list
 * @n: the element to add
 *
 * Return: returns address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	while (last) /* find last element */
	{
		if (last->next == NULL)
		{
			last->next = new;
			break;
		}
		last = last->next;
	}
	new->prev = last;
	if (last == NULL)
		*head = new;

	return (new);
}
