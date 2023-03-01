#include "main.h"

/**
 * cap_string - capitalise first letter every word
 * @c: string to evaluate
 *
 * Return: character pointer to the string
 */
char *cap_string(char *c)
{
	int i, prev;

	/* check until the null terminator */
	for (i = 0; c[i] != '\0'; i++)
	{
		prev = i - 1;
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (i == 0)
			{
				/* 32 is the difference from 'a' to 'A' */
				c[i] = c[i] - 32;
			}
			else if (c[prev] == ' ' || c[prev] == '\t')
			{
				c[i] = c[i] - 32;
			}
			else if (c[prev] == '\n' || c[prev] == ',')
			{
				c[i] = c[i] - 32;
			}
			else if (c[prev] == ';' || c[prev] == '.')
			{
				c[i] = c[i] - 32;
			}
			else if (c[prev] == '!' || c[prev] == '?')
			{
				c[i] = c[i] - 32;
			}
			else if (c[prev] == '"' || c[prev] == '(')
			{
				c[i] = c[i] - 32;
			}
			else if (c[prev] == ')' || c[prev] == '{' || c[prev] == '}')
			{
				c[i] = c[i] - 32;
			}
		}
	}
	return (c);
}
