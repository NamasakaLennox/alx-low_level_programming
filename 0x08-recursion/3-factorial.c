#include "main.h"

/**
 * factorial - get factorial value
 * @n: integer value
 *
 * Return: the factorial value
 * -1 if negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
