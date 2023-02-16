#include<stdio.h>

/**
 * main - this is where the program begins
 *
 * Description: Prints the sizes of data types
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int typeInt;
	float typeFloat;
	char typeChar;
	long int typeLong;
	long long int typeLL;

	printf("Size of a char: %lu byte(s)\n", sizeof(typeChar));
	printf("Size of an int: %lu byte(s)\n", sizeof(typeInt));
	printf("Size of a long int: %lu byte(s)\n", sizeof(typeLong));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(typeLL));
	printf("Size of a float: %lu byte(s)\n", sizeof(typeFloat));

	return 0;
}

