#include "search_algos.h"

/**
 * binary_search - searches through an array using binary search
 * @array: the array to be searched through
 * @size: size of the array
 * @value: the value to lookup in the array
 *
 * Return: returns -1 on failure, otherwise returns the address of the
 * value found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (array == NULL || !(*array))
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i == right)
				printf("\n");
			else
				printf(", ");
		}

		middle = (left + right) / 2;
		if (array[middle] > value)
			right = middle - 1;
		else if (array[middle] < value)
			left = middle + 1;
		else
			return (middle);
	}

	return (-1);
}
