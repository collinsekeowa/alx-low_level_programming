#include "main.h"

/**
 * print_number -  a function that prints an integer
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int nm;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	nm = n;

	if (nm / 10)
		print_number(nm / 10);

	_putchar(nm % 10 + '0');
}
