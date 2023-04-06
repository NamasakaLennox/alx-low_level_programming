#include "main.h"

/**
 * print_binary - converts a number to binary and prints it
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift;
	signed long int index;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* index starts from 1 less than the index as we count from zero */
	index = sizeof(n) * 8 - 1;

	/* get to the first non zero number */
	while (index >= 0)
	{
		shift  = n >> index;
		index--;
		if (shift & 1)
		{
			_putchar('1');
			break;
		}
	}

	/* now we print all remaining bits */
	while (index >= 0)
	{
		shift = n >> index;
		if (shift & 1)
			_putchar('1');
		else
			_putchar('0');
		index--;
	}
}
