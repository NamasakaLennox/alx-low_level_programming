#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for an item in a linked list using jump search
 * @list: the list to search through
 * @size: size of the list to search
 * @value: the value to search for
 *
 * Return: returns the address of the value found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, count = 0;
	listint_t *temp = list, *prev;

	if (list == NULL || size == 0)
		return (NULL);
	jump = sqrt(size);
	prev = list;
	while (temp && count < size)
	{
		for (i = 0; i < jump && count < size; i++, count++)
		{
			if (temp->next)
				temp = temp->next;
			else
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n",
		       temp->index, temp->n);
		if (temp->n >= value) /* if element is greater than value */
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev->index, prev->index + jump);
			for (i = 0; (i < jump) && prev != temp->next; i++)
			{
				printf("Value checked at index [%lu] = [%d]\n",
				       prev->index, prev->n);
				if (value == prev->n) /* check if val exists */
					return (prev);
				prev = prev->next;
			}
			return (NULL); /* value not present in list */
		}
		prev = temp;
		if (temp->next == NULL)
			break;
	}
	return (NULL);
}
