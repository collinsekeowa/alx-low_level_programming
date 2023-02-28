#include "main.h"

/**
 *  print_rev -  a function that prints a string, in reverse
 *  @s: char to check
 *  Return: 0
 */

void print_rev(char *s)
{
	int index1, index2;

	index1 = 0;

	while (s[index1] != '\0')
		index1++;
	for (index2 = index1 - 1; index2 >= 0; index2--)
		_putchar(s[index2]);
	_putchar('\n');
}
