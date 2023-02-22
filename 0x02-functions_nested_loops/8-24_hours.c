#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (hr < 10)
			{
				_putchar('0');
				_putchar(hr + '0');
			}
			else
			{
				int a, b;

				a = hr / 10;
				b = hr % 10;
				_putchar(a + '0');
				_putchar(b + '0');
			}
			_putchar(':');

			if (min < 10)
			{
				_putchar('0');
				_putchar(min + '0');
			}
			else
			{
				int c, d;

				c = min / 10;
				d = min % 10;
				_putchar(c + '0');
				_putchar(d + '0');
			}
			_putchar('\n');
		}
	}
}
