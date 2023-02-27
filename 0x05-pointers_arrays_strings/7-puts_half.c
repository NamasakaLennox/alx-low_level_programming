#include "main.h"

/**
 * puts_half - prints the last half digits
 * @str: string parameter
 *
 * Return: no value
 */
void puts_half(char *str)
{
	int count, length, i, first, last;

	count = 0;
	/* count number of characters */
	while (str[count] != '\0')
	{
		count++;
	}
	length = count;
	/* printing for even length */
	if (length % 2 == 0)
	{
		i = length / 2;
		first = i;
		last = length - 1;
		while (first <= last)
		{
			_putchar(str[first]);
			first++;
		}
	}
	/* print for odd length */
	else
	{
		i = (length - 1) / 2;
		first = i + 1;
		last = length - 1;
		while (first <= last)
		{
			_putchar(str[first]);
			first++;
		}
	}
	_putchar('\n');
}
