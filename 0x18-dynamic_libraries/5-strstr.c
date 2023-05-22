#include "main.h"
#define NULL 0

/**
 * _strstr - locates a substring
 * @haystack: the sring to search
 * @needle: the substring
 *
 * Return: beginning of the located substring
 * otherwise null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0';)
		{
			/* to check consecutive characters */
			if (needle[j] == haystack[i + j])
				j++;
			else
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}
	return (NULL);
}
