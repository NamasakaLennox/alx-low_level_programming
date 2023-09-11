#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: the array to search from
 * @size: the size of the array
 * @value: the value to search for in the array
 *
 * Return: returns the index where the value is contained
 * returns -1 if value is not found in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || !(*array))
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
