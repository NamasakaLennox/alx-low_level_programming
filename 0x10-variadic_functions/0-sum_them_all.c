#include "variadic_functions.h"

/**
 * sum_them_all - adds all numbers passed as arguments
 * @n: the number of arguments to add
 * Return: the sum of the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(ap, n); /* initialize the argument list */

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int); /* gets next argument value */

	va_end(ap); /* cleanup */
	return (sum);
}
