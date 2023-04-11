#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checking bits
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, r;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	r = n & d;
	if (r == d)
		return (1);

	return (0);
}
