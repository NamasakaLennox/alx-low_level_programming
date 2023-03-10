#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: character parameter
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	/* counts the number of iterations */
	while (s[count] != '\0')
	{
		count = count + 1;
	}
	return (count);
}
