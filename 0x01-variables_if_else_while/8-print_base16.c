#include <stdio.h>

/**
 * main - where the program begins execution
 *
 * Description: prints all hexadecimal numbers
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
