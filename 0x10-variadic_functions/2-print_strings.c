#include "variadic_functions.h"

/**
 * print_strings - prints strings given as a parameter
 * @separator: the string separator
 * @n: the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *next;


	va_start(ap, n);

	i = 0;
	for (i = 0; i < n; i++)
	{
		next = va_arg(ap, char *);
		if (next)
			printf("%s", next);
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
