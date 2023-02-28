#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: char to check
 * Return: 0
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
