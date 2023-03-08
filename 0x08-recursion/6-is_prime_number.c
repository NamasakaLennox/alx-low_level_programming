#include "main.h"

/**
 * _prime - check if prime
 * @a: base case
 * @num: the number to check
 *
 * Return: 1 if prime
 * 0 otherwise
 */
int _prime(int a, int num)
{
	if (num < 2 || num % a == 0)
		return (0);
	else if (a == num - 1)
		return (1);
	else if (num > a)
		return (_prime(a + 1, num));
	return (1);
}

/**
 * is_prime_number - run _prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	/* 2 is our base case */
	return (_prime(2, n));
}
