#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the char to initialize
 *
 * Return: pointer to the array
 * NULL if error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc((sizeof(char) * size) + 1);
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';
	return (arr);
}
