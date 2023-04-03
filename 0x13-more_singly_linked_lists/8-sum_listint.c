#include "lists.h"

/**
 * sum_listint - sums all the data of a list
 * @head: first element of a list
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
