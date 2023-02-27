#include "main.h"

/**
 * _strcpy - copy the string to another variable
 * @dest: variable to be copied to
 * @src: source of string
 *
 * Return: the address of the destination
 */
char *_strcpy(char *dest, char *src)
{
	int count, length;

	/* length of string */
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	length = count;
	/* copy the string */
	for (count = 0; count <= length; count++)
	{
		dest[count] = src[count];
	}
	return (dest);
}
