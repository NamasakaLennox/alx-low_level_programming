#include "main.h"

/**
 * print_sign - check sign of integer
 * @n: integer parameter
 *
 * Description: Prints the sign of an integer
 *
 * Return: 1 if positive
 * 0 if 0
 * -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
