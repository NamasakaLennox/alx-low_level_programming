#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer cointaining a copy of given string
 * @str: the given string
 *
 * Return: the address to the copied string
 * NULL if there is an error
 */
char *_strdup(char *str)
{
	char *arr;
	int size = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	arr = malloc((sizeof(char) * size) + 1);
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
