#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n elements
 * @a: the array
 * @n: number of elements
 *
 * Return: no value
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		/* first element */
		if (count == 0)
		{
			printf("%d", a[count]);
		}
		/* the rest */
		else
		{
			printf(", %d", a[count]);
		}
	}
	printf("\n");
}
