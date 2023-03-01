#include "main.h"

/**
 * rot13 - encrypts in rot 13
 * @c: string to be encrypted
 *
 * Return: the encrypted string
 */
char *rot13(char *c)
{
	int i, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char repl[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	/* iterate through the given string */
	while (c[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			/* replace with corresponding replacement */
			if (c[i] == alpha[j])
			{
				c[i] = repl[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
