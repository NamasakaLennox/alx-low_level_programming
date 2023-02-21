#include "main.h"

/**
 * _abs - compute the absolute value
 * @a: integer parameter
 *
 * Description: find the absolute value
 *
 * Return: the value
 */
int _abs(int a)
{
	int b;

	if (a >= 0)
	{
		return (a);
	}
	else
	{
		b = (-1) * a;
		return (b);
	}
}
