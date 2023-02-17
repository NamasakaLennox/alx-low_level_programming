#include <stdio.h>

/**
 * main - where execution begins
 *
 * Description: print all possible combination of three digits
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j, k, n;

	n = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (k = j + 1; j <= '9'; j++)
			{
				if (n > '0')
				{
					putchar(',');
					putchar(' ');
				}
				n++;
				putchar(i);
				putchar(j);
				putchar(k);
			}
		}
	}
	putchar('\n');
	return (0);
}
