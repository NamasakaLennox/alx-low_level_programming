#include "main.h"

/**
 * get_bit - gets the value of a bit at a particular index
 * @n: the number to check for bits
 * @index: position of the bit starting from 0
 *
 * Return: the value of the bit at that index, -1 if fail
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;
	unsigned long int shift;

	shift = (n >> index);
	if (!shift)
		return (-1);
	value = shift & 1;

	return (value);
}
