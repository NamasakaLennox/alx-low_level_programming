#include "main.h"

/**
 * _abs - compute the absolute value
 * @n: integer parameter
 *
 * Description: find the absolute value
 *
 * Return: the value
 */
int _abs(int n)
{
	int b;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		b = (-1) * n;
		return (b);
	}
}
