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
	int count, length, i;

	/* count length of string to be copied */
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	length = count;
	/* copy the string */
	i = 0;
	while (i <= length)
	{
		if (i < n)
		{
			dest[i] = src[i];
			i++;
	}
	return (dest);
}
