#include "main.h"

/**
 * read_textfile - reads a given file and prints a set number of bytes
 * @filename: name of the file to read
 * @letters: the number of characters to print
 *
 * Return: the number of characters printed
 * returns 0 if there is an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t char_printed = 0;
	FILE *file_des;
	char c;

	/* if there is a filename given and is not NULL */
	if (!filename)
		return (0);

	/* open the file */
	file_des = fopen(filename, "r");
	/* if open failed */
	if (!file_des)
		return (0);

	/* read the data in the file */
	while ((c = getc(file_des)) != EOF && char_printed < letters)
	{
		putc(c, stdout);
		char_printed++;
	}

	if (char_printed < letters && !EOF)
		return (0);

	return (char_printed);
}
