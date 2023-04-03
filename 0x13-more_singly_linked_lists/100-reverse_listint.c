#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: address of head address
 *
 * Return: address of the new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_addr = NULL, *next;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev_addr;
		prev_addr = *head;
		if (next)
			(*head) = next;
		else
			break;
	}
	return (*head);
}
