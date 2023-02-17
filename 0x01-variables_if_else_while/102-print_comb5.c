#include <stdio.h>

/**
 * main - where execution begins
 *
 * Description: print all possible combination of two two-digit numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int i, j, k, l, n;

	n = '0';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				for (l = j + 1; l <= '9'; l++)
				{
					if (n > 0)
					{
						putchar(',');
						putchar(' ');
					}
					n++;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
