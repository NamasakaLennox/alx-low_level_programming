#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: starting integer
 *
 * Description: prints all natural number from n - 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	int b;

	if (n < 98)
	{
		for (b = n; b < 98; b++)
		{
			printf("%d, ", b);
		}
	}
	else if (n > 98)
	{
		for (b = n; b  > 98; b--)
		{
			printf("%d, ", b);
		}
	}
	printf("%d\n", 98);
}
