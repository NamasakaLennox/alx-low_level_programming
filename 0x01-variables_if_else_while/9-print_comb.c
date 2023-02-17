#include <stdio.h>

/**
 * main - where the program begins execution
 *
 * Description: prints all single digit numbers separated by a comma
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
		if (x < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
