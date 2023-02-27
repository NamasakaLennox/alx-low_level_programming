#include "main.h"

/**
 * _puts - prints a string
 * @str: character parameter
 *
 * Return: no return value
 */
void _puts(char *str)
{
	int a;

	/* prints out all the characters until the end */
	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
