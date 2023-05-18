#include "lists.h"

/**
 * sum_dlistint - finds the sum of all the elements in the linked list
 * @head: the first node in the list
 *
 * Return: returns the sum of the elements, 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
