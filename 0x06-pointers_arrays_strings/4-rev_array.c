#include "main.h"
/**
 * reverse_array - reverses values in an array
 * @a: the array to be revesed
 * @n: number of elements in the array
 *
 * Return: no value
 */
void reverse_array(int *a, int n)
{
	int i, j;

	/* divide the elements in half and swap the values on each side */
	j = 0;
	for (i = n - 1; i >= n / 2; i--)
	{
		int temp;

		temp = a[j];
		a[j] = a[i];
		a[i] = temp;
		j++;
	}
}
