#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - calloc function
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to the memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return (ptr);
}

/**
 * _strlen - length of string
 * @s - the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

/**
 * _print - prints using putchar
 * @str: string to print
 *
 * Return: no value
 */
void _print(char *str)
{
	while (*str)
		_putchar(*(str++));
}

/**
 * _isdigit
 * @s1: string
 *
 * Return: 0 on success, 1 if fail
 */
int _isdigit(char *s1)
{
	if (*s1 == '-' || *s1 == '+')
		++s;
	while (*s1)
	{
		if (*s1 < 48 || *s1 > 57)
			return (0);
	}
	return (1);
}

/**
 * reverse- reverse string
 * @first: first index
 * @last: last index
 * @str: string to reverse
 *
 * Return: no value
 */
void reverse(int first, int last, char *str)
{
	int i, j;
	char temp;

	while (str[last] == 0 && last != first)
		--last;
	for (i = first, j = last; i <= j; ++i, --j)
	{
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
	}
}
/**
 * multiply - multiply a long string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to answer
 */
char *multiply(char *s1, char *s2)
{
	int len1, len2, i, j, a, b, neg = 0;
	char *res;
	char mul, mul_carry, sum, sum_carry;

	if (*s1 == '-')
	{
		neg ^= 1;
		++s1;
	}
	if (*s2 == '-')
	{
		neg ^= 1;
		++s2;
	}
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	res = _calloc(len1 + len2 + 1 + neg, sizeof(char));
	if (res == NULL)
		return (NULL);
	if (neg)
		res[0] = '-';
	for (i = len2 - 1, a = neg; i >= 0; --i, ++a)
	{
		mul_carry = 0;
		sum_carry = 0;
		for (j = len1 - 1, b = a; j >= 0; --j, ++b)
		{
			mul = (s1[j] - '0') * (s2[i] - '0') + mul_carry;
			mul_carry = mul / 10;
			mul %= 10;
			sum = res[b] + mul + sum_carry;
			sum_carry = sum / 10;
			sum %= 10;
			res[b] = sum;
		}
		res[b] = sum_carry + mul_carry;
	}
	reverse(neg, b, res);
	return (res);
}

/**
 * main - man fxn
 * @argc: argument count
 * @argv: string of arguments
 *
 * Return: exit status
 */
int main(int argc, char *argv[])
{
	char *ans;

	if (argc != 3)
	{
		_print("Error\n");
		exit(98);
	}
	if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_print("Error\n");
		exit(98);
	}
	ans = multiply(argv[1], argv[2]);
	if (ans == NULL)
	{
		_print("Error\n");
		exit(98);
	}
	_print(ans);
	_putchar('\n');
	free(ans);
	exit(EXIT_SUCCESS);
}
