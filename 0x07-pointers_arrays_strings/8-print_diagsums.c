#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of diagonals
 * @a: array of matrix
 * @size: size of matrix
 *
 * Return: no value
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		sum1 += a[i];
	}
	for (i = (size * size) - size; i > 0; i -= (size - 1))
	{
		sum2 += a[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
