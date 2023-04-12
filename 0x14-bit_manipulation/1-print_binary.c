#include "main.h"

/**
 * _power - a function for power and base calculation
 * @base: base value of exponent
 * @pow: power value of exponent
 * Return:the value of base and power
 */

unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int numb;
	unsigned int i;

	numb = 1;
	for (i = 1; i <= pow; i++)
		numb *= base;
	return (numb);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: num to be represented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
