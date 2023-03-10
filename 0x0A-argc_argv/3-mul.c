#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program start
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: 0 on success, 1 on fail
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);
	return (0);
}
