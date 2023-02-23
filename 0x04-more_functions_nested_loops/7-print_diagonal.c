#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: integer parameter
 *
 * Return: no return value
 */
void print_diagonal(int n)
{
	int b; /* to avoid reassigning the global variable n */

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < n; b++) /* length of line */
		{
			int c;

			c = b;
			if (c > 0) /* for adding spaces */
			{
				int d;

				for (d = 0; d < c; d++) /* no. of spaces */
				{
					_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
