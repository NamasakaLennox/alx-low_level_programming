#include "lists.h"
#include <string.h>

/**
 * _strlen - gets the length of a string
 * @str: string to check
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
		count++;

	return (count);
}

/**
 * add_node - adds a node at the top of the linked list
 * @head: the current top element
 * @str: the element to add
 *
 * Return: pointer to the new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
