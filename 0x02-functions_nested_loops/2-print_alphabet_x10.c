#include "main.h"

/**
 * print_alphabet_x10 - f  that prints 10 times the alphabet, in lowercase
 * You can only use _putchar twice in your code
 */

void print_alphabet_x10(void)
{
	char alpha;

	int count = 0;

	while (count++ <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n')
	}
}
