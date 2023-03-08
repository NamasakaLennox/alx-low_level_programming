#include "main.h"

/**
 * _length - get length of string
 * @s: string to find length
 *
 * Return: length
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * _verify - check if it's a palindrome
 * @s: the string
 * @len: last value
 * @count: first value
 *
 * Return: 1 if true
 * 0 otherwise
 */
int _verify(char *s, int len, int count)
{
	if (count >= len)
		return (1);
	if (s[len] == s[count])
		return (_verify(s, len - 1, count + 1));
	return (0);
}

/**
 * is_palindrome - check for palindrome
 * @s: the string
 *
 * Return: value from _verify
 */
int is_palindrome(char *s)
{
	int len = _length(s);
	int count = 0;

	return (_verify(s, len - 1, count));
}
