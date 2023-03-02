#include "main.h"

/**
 * reverse - reverse the array of string
 * @str: string parameter
 *
 * Return: no return value
 */
void reverse (char *str)
{
	int i = 0, first, last;
	char temp;

	while (str[i] != '\0')
		i++;
	last = i - 1;
	for (first = 0; first < last; first++)
	{
		temp = str[first];
		str[first] = str[last];
		str[last] = temp;
		last--;
	}
}

/**
 * infinite_add - add two long numbers
 * @n1: first number
 * @n2: ssecond numbers
 * @r: buffer storage
 * @size_r: size of buffer
 *
 * Return: pointer to answer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, carry = 0, digits = 0;
	int num1 = 0, num2 = 0, sum = 0;

	/* get length of the two strings */
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	i--; /* to loop to the last digit (size -1) */
	j--;
	if (j >= size_r || i >= size_r) /* if either digit > buffer */
		return (0);
	while (j >= 0 || i >= 0 || carry ==1)
	{
		if (i < 0)
			num1 = 0; /* for when n2 is larger */
		else
			num1 =  n1[i] - '0';
		if (j < 0)
			num2 = 0; /* for when n1 is larger */
		else
			num2 = n2[j] - '0';
		sum = num1 + num2 + carry;
		carry = sum / 10;
		if (digits >= size_r - 1) /* since digit counts from 0 not 1 */
			return (0);
		r[digits] = (sum % 10) + '0';
		digits++;
		i--;
		j--;
	}
	r[digits] = '\0';
	reverse(r);
	return (r);
}
