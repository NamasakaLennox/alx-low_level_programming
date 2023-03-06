#include "main.h"

/**
 * set_string - set the value of a pointer
 * @s: string to be set
 * @to: what to set it to
 *
 * Return: no value
 */
void set_string(char **s, char *to)
{
	*s = to;
}
