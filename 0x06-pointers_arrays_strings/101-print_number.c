#include "main.h"

/**
 * print_number - print an integer value
 * @n: integer to print
 *
 * Return: no value
 */
void print_number(int n)
{
	unsigned int num;

	/* put the values in an unsigned int */
	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		/* call the function recursively */
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
