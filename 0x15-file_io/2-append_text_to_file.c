#include "main.h"

/**
 * _strlen - function that finds the length of a string
 * @str: the string pointer
 *
 * Return: the length of the string
 */
size_t _strlen(char *str)
{
	size_t l;

	for (l = 0; str[l]; l++)
		;
	return (l);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fp, text_content, _strlen(text_content));
	close(fp);
	if (len == -1)
		return (-1);
	return (1);
}
