#include "main.h"

/**
 * more_numbers - prints 1 to 14 10 times
 *
 * Return: no return value
 */
void more_numbers(void)
{
	int i, count, b;

	for (count = 0; count < 10; count++) /* loop 10 times */
	{
		for (i = 0; i <= 14; i++) /* count up to 14 */
		{
			b = i; /* not to modify global variable i */
			if (b > 9)
			{
				int a;

				a = b / 10;
				_putchar(a + '0');
				b = b % 10;
			}
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
