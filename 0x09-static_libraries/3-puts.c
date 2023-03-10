#include "main.h"

/**
 * _puts - prints a string
 * @s: character parameter
 *
 * Return: no return value
 */
void _puts(char *s)
{
	int a;

	/* prints out all the characters until the end */
	a = 0;
	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
