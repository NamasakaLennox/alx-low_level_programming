#include "search_algos.h"

/**
 * interpolation_search - performs a search using the interpolation search alg.
 * @array: the array to search item from
 * @size: the size of the array
 * @value: the integer to search for in the array
 *
 * Return: returns the index of the element, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || high < low)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));

	while ((array[high] != array[low]) && (value >= array[low]) &&
	       (value <= array[high]))
	{
		if (array[pos] < value)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       pos, array[pos]);
			low = pos + 1;
		}
		else if (array[pos] > value)
		{
			printf("Value checked array[%lu] = [%d]\n",
			       pos, array[pos]);
			high = pos - 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n",
			       pos, array[pos]);
			return (pos);
		}
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
	}
	if (value == array[low])
		return (low);
	if (pos >= size)
		printf("Value checked array[%lu] is out of range\n",
		       pos);
	return (-1);
}
