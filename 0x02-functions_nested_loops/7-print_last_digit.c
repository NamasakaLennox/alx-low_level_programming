#include "main.h"

/**
 * print_last_digit - to print the last digit
 * @a: parameter
 *
 * Description: to find the last digit
 *
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (a < 0)
	{
		b = b * (-1);
	}
	_putchar(b + '0');

	return (b);
}
