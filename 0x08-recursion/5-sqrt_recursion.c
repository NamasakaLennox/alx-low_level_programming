#include "main.h"

/**
 * _sqrt - checks for perfect square root
 * @a: squareroot number
 * @num: the nember being checked
 *
 * Return: the value of the square root
 * -1 if not perfect squareroot
 */
int _sqrt(int a, int num)
{
	if (a * a == num)
		return (a);
	if (a * a > num)
		return (-1);
	return (_sqrt((a + 1), num));
}

/**
 * _sqrt_recursion - returns natural square
 * @n: the integer to check
 *
 * Return: integer value
 */
int _sqrt_recursion(int n)
{
	/* 1 is our base case */
	return (_sqrt(1, n));
}
