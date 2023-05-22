#include "main.h"

/**
 * _isalpha - check if it is an alphabet
 * @c: integer parameter
 *
 * Description: evaluates alphabets
 *
 * Return: 1 on success
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
