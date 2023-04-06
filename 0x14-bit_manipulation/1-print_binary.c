#include "main.h"

/**
 * print_binary - converts a number to binary and prints it
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int shift;
	int index;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	/* index starts from 31 as an int is 4 bytes(32 bits) */
	index = 31;

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
