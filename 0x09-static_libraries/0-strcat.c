#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: where the string is added
 * @src: string to be added
 *
 * Return: a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int count, length1, length2, i;

	/* get length of first string */
	count = 0;
	while (dest[count] != '\0')
	{
		count++;
	}
	length1 = count;
	/* get length of second string */
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	length2 = count;
	/* concatenate the strings */
	i = 0;
	while (i <= length2)
	{
		dest[length1 + i] = src[i];
		i++;
	}
	return (dest);
}
