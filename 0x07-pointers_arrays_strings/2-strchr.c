#include "main.h"
#define NULL 0

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
	int i = 0;

	/* check whole string */
	while (s[i] != '\0')
	{
		/* check for match */
		if (s[i] == c)
		{
			/* return address if match */
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
