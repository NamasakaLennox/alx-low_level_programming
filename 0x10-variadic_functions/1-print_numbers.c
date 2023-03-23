#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers given as parameters
 * @separator: the character to separate the numbers
 * @n: the number of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
