#include "main.h"

/**
 * print_square - makes a square of given size
 * @size: size of the square
 *
 * Return: no return value
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++) /* no. of rows */
		{
			for (j = 0; j < size; j++) /* no of columns */
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
