#include "main.h"

/**
 * puts2 - prints every other number
 * @str: char parameter
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		if (count % 2 == 0)
		{
			_putchar(str[count]);
		}
		count++;
	}
	_putchar('\n');
}
