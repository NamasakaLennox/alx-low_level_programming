#include "main.h"

/**
 * check_valid - checks if the number only contains 0's and 1's
 * @str: the string to check
 *
 * Return: returns length of string if valid, 0 if not
 */
unsigned int check_valid(char *str)
{
	unsigned int len = 0;

	while (str[len])
	{
		if (str[len] == '0' || str[len] == '1')
			len++;
		else
			return (0);
	}
	return (len);
}

/**
 * convert_bin - converts the string from binary to int
 * @str: the string to convert
 * @index: the highest index
 *
 * Return: the converted number
 */
unsigned int convert_bin(char *str, unsigned int index)
{
	unsigned int bin = 0, count = 0, expon = 2, temp = index - 1;

	while (temp > 0)
	{
		expon = expon * 2;
		temp--;
	}
	while (str[count])
	{
		if (index == 0)
			expon = 1;
		bin += (str[count] - '0') * expon;
		count++;
		index--;
		expon /= 2;
	}

	return (bin);
}

/**
 * binary_to_uint - converts a binary number to unsigned integer
 * @b: the string of binary numbers
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	unsigned int len_str, index;
	char *str = (char *)b;

	if (b == NULL)
		return (0);
	len_str = check_valid(str);
	if (len_str == 0)
		return (0);

	index = len_str - 1;
	num = convert_bin(str, index);

	return (num);
}
