#include "main.h"

/**
 * flip_bits - number of flipped bits
 * @n: first number
 * @m: second number
 *
 * Description: gets the number of bits you'll need to flip
 * to get to a certain number given
 *
 * Return: returns the number of flips required
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int val_xor;

	val_xor = n ^ m;

	/* iterate through the number to find bits that were diffrent */
	while (val_xor)
	{
		/* check the last value if it's a 1 - signaling diffrence */
		if (val_xor & 1)
			flip++;

		/* move to next digit */
		val_xor = val_xor >> 1;
	}

	return (flip);
}
