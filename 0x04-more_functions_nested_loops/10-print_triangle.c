#include "main.h"

/**
 * print_triangle - prints a triangle of hashes
 * @size: size of the triangle
 *
 * Return: no value
 */
void print_triangle(int size)
{
	int line, spaces, hashes;

	if (size > 0)
	{
		for (line = 0; line < size; line++)
		{
			for (spaces = size - 1; spaces > line; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes <= line; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
