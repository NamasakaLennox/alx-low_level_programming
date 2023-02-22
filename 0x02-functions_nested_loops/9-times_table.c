#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row, column, product, counter;

	for (row = 0; row <= 9; row++)
	{
		counter = 0;
		for (column = 0; column <= 9; column++)
		{
			product = row * column;
			if (counter > 0)
			{
				if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			counter++;
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
			{
				int a, b;

				a = product / 10;
				b = product % 10;
				_putchar(a + '0');
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}
