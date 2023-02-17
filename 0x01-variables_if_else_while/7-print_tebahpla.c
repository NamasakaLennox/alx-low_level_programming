#include <stdio.h>

/**
 * main- where execution begins
 *
 * Description: print letters of the alphabet in reverse
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;

	for (x = 'z'; x <= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
