#include <stdio.h>
#include <stdlib.h>

/**
 * main - where execution begins
 * @argc: argument count
 * @argv: string of arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count, num;
	void *ptr;
	char *ptr_cast;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = main;
	ptr_cast = ptr;
	for (count = 0; count < num; count++)
	{
		printf("%02hhx", ptr_cast[count]);
		if (count < num - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
