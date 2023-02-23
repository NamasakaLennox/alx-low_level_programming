#include "main.h"

/**
 * print_line - prints a straight line with n length
 * @n: integer parameter
 *
 * Return: no return value
 */
void print_line(int n)
{
	if (n > 0)
	{
		int a;

		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
