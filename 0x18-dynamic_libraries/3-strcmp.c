#include "main.h"
/**
 * _strcmp - compares a string
 * @s1: first string
 * @s2: second string
 *
 * Return: the diffrence
 */
int _strcmp(char *s1, char *s2)
{
	int diff, i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff)
		{
			return (diff);
		}
		i++;
	}
	return (0);
}
