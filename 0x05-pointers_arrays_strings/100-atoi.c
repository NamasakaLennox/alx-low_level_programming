#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string to be converted
 *
 * Return: an integer value, result
 */
int _atoi(char *s)
{
	int count, sign, result, check;
	unsigned int num;

	/* initialise sign as positive and number as zero */
	count = 0;
	sign = 1;
	num = 0;
	/* iterates through the string */
	while (s[count] != '\0')
	{
		/* change sign if negative is encountered */
		if (s[count] == '-')
		{
			sign = -sign;
		}
		/* if number counvert it to int */
		else if (s[count] >= '0' && s[count] <= '9')
		{
			num = num * 10 + (s[count] - '0');
			check = count + 1;
			/* break if next digit is not a number */
			if (s[check] < '0' || s[check] > '9')
			{
				break;
			}
		}
		count++;
	}
	result = num * sign;
	return (result);
}
