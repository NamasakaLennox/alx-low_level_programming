#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: where to be copied
 * @src: source
 * @n: size of area to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
