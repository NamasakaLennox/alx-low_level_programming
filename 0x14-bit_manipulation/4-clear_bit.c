#include "main.h"

/**
 * clear_bit - clears a bit at a certain location
 * @n: the number to clear a bit
 * @index: the index of the bit to clear
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(*n) * 8 - 1;
	unsigned long int shift;

	if (index > size)
		return (-1);

	shift = ~(1 << index);
	*n = *n & shift;

	return (1);
}
