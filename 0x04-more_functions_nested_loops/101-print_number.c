#include "main.h"

/**
 * print_number - prints an integer value
 * @n: value to print
 *
 * Return: no value
 */
void print_number(int n)
{
	/* if number is negative */
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	/* call function recursively */
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
