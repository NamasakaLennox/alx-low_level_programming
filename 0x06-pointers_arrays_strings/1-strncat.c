#include "main.h"
/**
 * _strncat - concatenates n bytes of a string
 * @dest: destination string
 * @src: string to be added
 * @n: number of bytes
 *
 * Return: ponter to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, length1, length2, i;

	/* count length of first string */
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	length1 = count;
	/* count length of second string */
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	length2 = count;
	/* concatenate the string */
	i = 0;
	while (i <= length2)
	{
		/* only for n number of bytes */
		if (i < n)
		{
			dest[length1 + i] = src[i];
		}
		i++;
	}
	return (dest);
}
