#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - where execution begins
 * @argc: number of arguments
 * @argv: of string arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
