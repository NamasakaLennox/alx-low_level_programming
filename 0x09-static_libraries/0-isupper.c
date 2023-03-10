#include "main.h"

/**
 * _isupper - checks whether uppercase
 * @c: integer parameter
 *
 * Description: to evaluate if upper case
 *
 * Return: 1 if upper, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
