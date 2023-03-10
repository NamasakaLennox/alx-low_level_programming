#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: integer parameter
 *
 * Description: verifies if it's a digit
 *
 * Return: 1 on success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
