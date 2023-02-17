#include <stdio.h>

/**
 * main- where execution begins
 *
 * Description: print letters of the alphabet
 * Uppercase and lowercase
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
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
