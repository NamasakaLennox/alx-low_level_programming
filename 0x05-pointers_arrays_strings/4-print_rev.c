#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: char parameter
 *
 * Return: no value
 */
void print_rev(char *s)
{
	int count, i;

	/* get the length of string */
	count = 0;
	while (s[count] != '\0')
	{
		count = count + 1;
	}
	/* use the length to print in reverse order */
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
