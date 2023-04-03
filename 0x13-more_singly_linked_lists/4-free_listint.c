#include "lists.h"

/**
 * free_listint - frees allocated memory of a list
 * @head: first element in the list
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
