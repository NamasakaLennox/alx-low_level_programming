#include "main.h"

/**
 * _strlen - gets length of given string
 * @str: the string to find its length
 *
 * Return: the length of the string
 */
size_t _strlen(const char *str)
{
	size_t count = 0;

	while (str[count])
		count++;
	return (count);
}

/**
 * append_text_to_file - adds a text at the end of a file
 * @filename: the file to manipulate
 * @text_content: the content to add to file
 * Description: only appends if file exists
 *
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_close;
	ssize_t char_print;

	if (!filename)
		return (-1);

	f_open = open(filename, O_WRONLY || O_APPEND);
	if (f_open == -1)
		return (-1);

	if (text_content)
	{
		char_print = write(f_open, text_content, _strlen(text_content));
		if (char_print == -1)
			return (-1);
	}

	f_close = close(f_open);
	if (f_close < 0)
		return (-1);

	return (1);
}
