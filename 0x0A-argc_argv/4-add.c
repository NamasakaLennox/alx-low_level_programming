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
	int count, i, sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (argv[count][i] < 47 || argv[count][i] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
