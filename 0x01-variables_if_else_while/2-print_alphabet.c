#include <stdio.h>

/**
 * main- where execution begins
 *
 * Description: print letters of the alphabet
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
