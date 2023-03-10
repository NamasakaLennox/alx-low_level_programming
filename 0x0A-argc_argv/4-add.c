#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program start
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: 0 on success, 1 if unsuccessful
 */
int main(int argc, char *argv[])
{
	int count, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		if (atoi(argv[count]))
		{
			sum += atoi(argv[count]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
