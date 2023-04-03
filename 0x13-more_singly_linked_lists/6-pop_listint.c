#include "lists.h"

/**
 * pop_listint - removes the first element of a list
 * @head: address of the head address
 *
 * Return: returns the data of the popped element
 */
int pop_listint(listint_t **head)
{
	listint_t *remove = *head;
	int value;

	if (*head == NULL || head == NULL)
		return (0);

	value = (*head)->n;
	*head = ((*head)->next);
	free(remove);

	return (value);
}
