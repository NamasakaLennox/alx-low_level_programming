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
	int (*ops)(int, int);

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

	/* get address of name of function */
	ops = get_op_func(argv[2]);

	/* invalid operation provided */
	if (ops == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ops(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
