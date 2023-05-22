#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory address
 * @b: the byte to fill
 * @n: size to br filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	/* fill memory of size n with byte b */
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
