#include "main.h"

/**
 * get_endianness - checks if Little or Big endian
 *
 * Return: 1 if Little Endian
 * 0 if Big Endian
 */
int get_endianness(void)
{
	unsigned int _byte;
	char *check_endian;

	_byte = 1;
	check_endian = (char *)&_byte;

	/* check_endian will be 1 for Little endian */
	/* least significant byte is stored first */
	/* vise versa is true for Big endian */
	if (*check_endian)
		return (1);

	return (0);
}
