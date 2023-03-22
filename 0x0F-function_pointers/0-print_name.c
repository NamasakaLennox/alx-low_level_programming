#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: pointer to the callback function
 */
void print_name(char *name, void (*f)(char *str))
{
	if (f)
	{
		f(name);
	}
}
