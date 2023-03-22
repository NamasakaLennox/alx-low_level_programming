#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - where execution begins
 * @argc: argument count
 * @argv: string of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result;

	/* incorrect number of arguments */
	if (argc != 4)
	{
		printf("%d\n", argc);
		printf("Error\n");
		exit(98);
	}
	/* division by zero */
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
	    strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* invalid operation provided */
	if (!(strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0 ||
	      strcmp(argv[2], "+") == 0 || strcmp(argv[2], "-") == 0 ||
	      strcmp(argv[2], "*") == 0 || strlen(argv[2]) == 1))
	{
		printf("Error\n");
		exit(99);
	}

	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
