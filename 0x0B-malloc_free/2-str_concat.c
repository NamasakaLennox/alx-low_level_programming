#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 * NULL if there is an error
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int size1 = 0, size2 = 0, i, j = 0, k = 0;
	/* get length of strings s1 and s2 */
	if (s1 != NULL)
	{
		while (s1[size1] != '\0')
			size1++;
	}
	else if (s1 == NULL)
		size1 = 0;
	if (s2 != NULL)
	{
		while (s2[size2] != '\0')
			size2++;
	}
	else if (s2 == NULL)
		size2 = 0;
	/* allocate memory space */
	arr = malloc((sizeof(char) * size1) + (sizeof(char) * size2) + 1);
	if (arr == NULL)
		return (NULL);
	/* concatenate the strings */
	for (i = 0; i < size1; i++, j++)
		arr[i] = s1[j];
	for (; i < size1 + size2; i++, k++)
		arr[i] = s2[k];
	arr[i] = '\0';
	return (arr);
}
