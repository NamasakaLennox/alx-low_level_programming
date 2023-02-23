#include <stdio.h>

/**
 * main - entry point for the program
 *
 * Description: finds maximum prime factor
 *
 * Return: 0 on success
 */
int main(void)
{
	long int num, factor, max;

	max = 1; /* set maximum factor */
	num = 612852475143;
	factor = 2; /* initial factor */
	while (num > 1)
	{
		if (num % factor == 0)
		{
			num = num / factor;
			max = factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", max);
	return (0);
}
