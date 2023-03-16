#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block
 * @ptr: memory previously allocated
 * @old_size: allocated space for ptr
 * @new_size: new memory block size
 *
 * Return: pointer to the new block
 * NULL if error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *arr;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
		{
			free(arr);
			return (NULL);
		}
		return (arr);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
