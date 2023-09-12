#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches through an array using the jump_search algorithm
 * @array: the array to traverse
 * @size: the size of the array
 * @value: the value of the element to search
 *
 * Return: returns the index of the value found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i = i + sqrt(size))
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       j, i);
			while (j <= i)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       j, array[j]);
				if (array[j] == value)
					return (j);
				j++;
			}
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		j = i;
	}
	if (array[size - 1] < value)
	{
		i = size - 1;
		j = i + sqrt(size);
		printf("Value found between indexes [%lu] and [%lu]\n",
		       i, j);
		for (; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       i, array[i]);
		}
	}
	return (-1);
}
