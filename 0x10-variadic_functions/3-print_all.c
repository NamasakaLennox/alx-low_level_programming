#include "variadic_functions.h"

/**
 * print_all - prints all types of arguments
 * @format: string of all the formats included
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int count;
	char *str, *sep; /* sep is the separator */

	va_start(ap, format);
	count = 0;
	while (format && format[count])
	{
		sep = "";
		if (format[count + 1])
			sep = ", ";
		switch (format[count])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), sep);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), sep);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str || !*str)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		count++;
	}
	va_end(ap);
	printf("\n");
}
