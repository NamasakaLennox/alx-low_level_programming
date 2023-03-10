#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program start
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int coins = 0, cash;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cash = atoi(argv[1]);
	if (cash <= 0)
		printf("%d\n", 0);
	while (cash >= 25)
	{
		coins++;
		cash -= 25;
	}
	while (cash >= 10)
	{
		coins++;
		cash -= 10;
	}
	while (cash >= 5)
	{
		coins++;
		cash -= 5;
	}
	while (cash >= 2)
	{
		coins++;
		cash -= 2;
	}
	while (cash >= 1)
	{
		coins++;
		cash -= 1;
	}
	printf("%d\n", coins);
	return (0);
}
