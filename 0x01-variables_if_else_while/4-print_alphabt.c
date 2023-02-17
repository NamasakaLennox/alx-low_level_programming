#include <stdio.h>

/**
 * main- where execution begins
 *
 * Description: print letters of the alphabet except q and e
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			continue;
		}
		else
		{
			putchar(x);
		}
	}

	putchar('\n');
	return (0);
}
