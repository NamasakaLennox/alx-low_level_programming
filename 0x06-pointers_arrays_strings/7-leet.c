#include "main.h"

/**
 * leet - encode a string with 1337
 * @c: string to be encoded
 *
 * Return: pointer to the new array
 */
char *leet(char *c)
{
	int i, j;
	char letter[5] = {'a', 'e', 'o', 't', 'l'}; /* store letters */
	char repl[5] = {'4', '3', '0', '7', '1'}; /* values to replace with */

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			/* subtract 32 for capitalisation */
			if (c[i] == letter[j] || c[i] == letter[j] - 32)
			{
				c[i] = repl[j];
			}
		}
	}
	return (c);
}
