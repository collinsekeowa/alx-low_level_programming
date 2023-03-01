#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * function should print the second half of the string
 * If the number of characters is odd,
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 * @str: char to check
 * Return: 0
 */

void puts_half(char *str)
{
	int index = 0, n;

	while (str[index] != '\0')
		index++;
	if (index + 1 % 2 != '0')
		n = (index - 1) / 2;
	else
		n = (index / 2);
	n++;

	for (index = n; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}
