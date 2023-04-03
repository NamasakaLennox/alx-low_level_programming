#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: address of the first element
 * @n: data of the new element
 *
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
