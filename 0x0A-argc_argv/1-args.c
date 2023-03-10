#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - where execution begins
 * @argc: argument count
 * @argv: string of arguments passed
 *
 * Return: always 0
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
