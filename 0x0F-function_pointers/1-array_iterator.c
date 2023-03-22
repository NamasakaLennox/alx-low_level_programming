#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function parameter on each element of an array
 * @array: the array to execute
 * @size: size of the array
 * @action: the function to execute
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int count = 0;

	if (action && array)
	{
		while (count < size)
		{
			action(array[count]);
			count++;
		}
	}
}
