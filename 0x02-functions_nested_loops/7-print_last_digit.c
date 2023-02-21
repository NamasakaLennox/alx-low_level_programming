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
	int b;

	if (a < 0)
	{
		b = ((-1) * a) % 10;
		return (b);
	}
	else
	{
		b = a % 10;
		return (b);
	}
}
