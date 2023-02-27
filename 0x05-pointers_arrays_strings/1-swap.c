#include "main.h"

/**
 * swap_int - swaps values of two variables
 * @a: first integer
 * @b: second integer
 *
 * Return: no value
 */
void swap_int(int *a, int *b)
{
	int i, j;

	/* assign the values from the pointer to different variables */
	i = *a;
	j = *b;
	/* swap the contents */
	*a = j;
	*b = i;
}
