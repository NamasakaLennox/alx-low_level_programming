#include "main.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string to check
 * @accept: matching characters
 *
 * Return: number of bytes of initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, len;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		/* end program if mismatch */
		if (s[i] != accept[j])
			break;
		i++;
	}
	return (len);
}
