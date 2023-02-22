#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: number to be evaluated
 * Return: last digit of the number
 */

int print_last_digit(int n)
{
	int ld;

	if (ld ==  n % 10)
	{
		_putchar(ld);
		return (ld);
	}
	else
		return (0);
}

