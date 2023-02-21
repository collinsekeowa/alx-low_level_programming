#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * You can only use _putchar twice in your code
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);

	_putchar('\n');
}
