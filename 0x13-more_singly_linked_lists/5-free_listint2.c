#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: address of the head
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
