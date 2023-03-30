#include "lists.h"
#include <string.h>

/**
 * _strlen - get length of string
 * @str: string to get length
 *
 * Return: length of the string
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
		count++;

	return (count);
}

/**
 * add_node_end - adds a node at the end of the list
 * @head: top of the list
 * @str: element to add
 *
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	/* if the first element was NULL */
	if (*head == NULL)
		*head = new;
	else /* if there are other elements */
	{
		last = *head;
		/* find the last node - last will always point to NULL*/
		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
