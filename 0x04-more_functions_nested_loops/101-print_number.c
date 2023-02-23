#include "main.h"

/**
 * print_number - prints an integer value
 * @n: value to print
 *
 * Return: no value
 */
void print_number(int n)
{
	unsigned int n1;

	/* if number is negative */
	if (n < 0)
	{
		_putchar('-');
		n1 = -1 * n;
	}
	else
	{
		n1 = n;
	}

	/* call function recursively */
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar(n1 % 10 + '0');
}
