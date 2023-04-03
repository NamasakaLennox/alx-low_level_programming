#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain index
 * @head: address of the head address
 * @index: index to delete
 *
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position;
	listint_t *current, *next;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	position = 0;
	while (position < index - 1)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		position++;
	}
	next = current->next;
	current->next = next->next;
	free(next);
	return (1);
}
