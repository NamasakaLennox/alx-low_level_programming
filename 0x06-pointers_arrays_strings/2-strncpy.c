#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: whre to be copied
 * @src: string to be copied
 * @n: number of bytes to copy
 *
 * Return: a pointer to the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy the string */
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
