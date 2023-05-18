#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index
 * @head: address of the first node in the list
 * @index: index of the element to delete
 *
 * Return: returns 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous, *next, *temp;
	unsigned int count = 0;

	if (!head)
		return (-1);
	if (!(*head))
		return (-1);
	temp = *head;
	while (temp && count < index)
	{
		count++;
		previous = temp;
		temp = temp->next;
		if (temp)
			next = temp->next;
	}
	if (index == count && temp)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}
		else
		{
			previous->next = next;
			if (next)
				next->prev = previous;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
