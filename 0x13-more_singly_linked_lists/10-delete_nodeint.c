#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain index
 * @head: address of the first element address
 * @index: the element to delete
 *
 * Return: 1 on success, 0 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous = *head, *current;
	unsigned int position = 0;

	if (*head == NULL) /* if no element */
	{
		/* free_listint2(head); */
		return (-1);
	}
	if (index == 0) /* deleting the first element */
	{
		current = *head;
		*head = (current)->next;
		free(current);
	}
	else /* deleting element in any other position */
	{
		while (position < index - 1 && current)
		{
			previous = previous->next;
			position++;
			if (previous == NULL || previous->next == NULL)
			{
				free_listint2(head);
				return (-1);
			}
		}
		current = previous->next;
		previous->next = current->next;
		free(current);
	}

	return (1);
}
