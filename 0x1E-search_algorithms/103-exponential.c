#include "search_algos.h"

/**
 * binary_s - performs a search using binary search algorithm
 * @array: the array to search
 * @left: the left most item in the array
 * @right: the right most item in the array
 * @value: the value to search for
 *
 * Return: returns the index of the value matched, otherwise -1
 */
int binary_s(int *array, size_t left, size_t right, int value)
{
	size_t middle, i;

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

/**
 * exponential_search - performs a search using exponential search algorithm
 * @array: the array to search
 * @size: size of the array to search for
 * @value: the value of the array being searched
 *
 * Return: returns the index of the value matched, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, right, left;

	if (array == NULL || size == 0)
		return (-1);
	/* for the first element of array */
	if (array[0] == value)
		return (0);
	/* all other elements */
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i < size)
		right = i;
	else
		right = size - 1;
	left = (i + 1) / 2;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       left, right);

	return (binary_s(array, left, right, value));
}
