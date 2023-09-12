#include "search_algos.h"

/**
 * binary_s - performs the search in a recursive binary sort
 * @array: the array to search from
 * @left: the left most element in the array
 * @right: the right most element in the array
 * @value: the value of the element to be searched
 *
 * Return: returns the index of the item found, otherwise -1
 */
int binary_s(int *array, size_t left, size_t right, int value)
{
	size_t middle, i;

	if (left < right)
	{
		/* print array being searched */
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i == right)
				printf("\n");
			else
				printf(", ");
		}
		middle = left + ((right - left) / 2);
		if (left == middle && array[middle] == value)
			return (middle);

		if (array[middle] < value)
			return (binary_s(array, middle + 1, right, value));
		return (binary_s(array, left, middle, value));
	}
	if (left == right)
	{
		printf("Searching in array: %d\n", array[left]);
	}
	return (-1);
}


/**
 * advanced_binary - returns the left most element in a repetitive list
 * @array: the array to be searched through
 * @size: size of the array to search through
 * @value: value of the element to search for
 *
 * Return: returns the index of  the item found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	/* search recursively */
	return (binary_s(array, left, right, value));
}
