#include "main.h"

/**
 * _pow_recursion - get the power of a number
 * @x: integer value
 * @y: power to raise
 *
 * Return: the power value
 * -1 if negative power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
