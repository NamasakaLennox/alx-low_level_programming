#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: address of string to check
 * @c: character to find
 *
 * Return: pointer to the first occurence
 * otherwie NULL
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i = 0;

	/* check whole string */
	while (s[i] != '\0')
	{
		/* check for match */
		if (s[i] == c)
		{
			/* store address if match */
			ptr = &s[i];
			break;
		}
		i++;
	}
	return (ptr);
}
