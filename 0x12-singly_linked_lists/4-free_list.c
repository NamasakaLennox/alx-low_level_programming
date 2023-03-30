#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: address of the first element in the list
 */
void free_list(list_t *head)
{
	list_t *first = head, *next = head;

	while (next)
	{
		next = first->next;
		free(first->str);
		free(first);
		first = next;
	}
}
