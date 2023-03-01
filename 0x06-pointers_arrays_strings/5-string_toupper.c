#include "main.h"

/**
 * string_toupper - convert string to uppercase
 * @c: string to be converted
 *
 * Return: pointer to the new string
 */
char *string_toupper(char *c)
{
	int i, diff;

	/* for every small letter replace the equivalent uppercase */
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			diff = c[i] - 'a';
			c[i] = 'A' + diff;
		}
	}
	return (c);
}
