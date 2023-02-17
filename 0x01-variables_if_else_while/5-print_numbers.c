#include <stdio.h>

/**
 * main - where the program begins execution
 *
 * Description: prints all single digit numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
