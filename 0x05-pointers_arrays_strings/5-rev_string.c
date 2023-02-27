#include "main.h"

/**
 * rev_string - reverse string
 * @s: parameter
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	 /* "count, last, first" for counters, temp for temporary assignment */
	int count, first, last, temp, length;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	length = count;
	last = length - 1;
	/* reverse string */
	for (first = 0; first < last; first++)
	{
		temp = s[first];
		s[first] = s[last];
		s[last] = temp;
		last--;
	}
}
