#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns index of the match
 * @array: array to be checked
 * @size: size of the array
 * @cmp: function pointer to the array
 *
 * Return: the index to the match
 * returns -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		while (count < size)
		{
			if (cmp(array[count]) != 0)
				return (count);
			count++;
		}
	}
	return (-1);
}
