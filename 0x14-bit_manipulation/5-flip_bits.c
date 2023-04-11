#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number from
 * @m: the second number to
 * Return: the number of bits to be  flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, result;
	unsigned int y, x;

	y = 0;
	result = 1;
	diff = n ^ m;
	for (x = 0; x < (sizeof(unsigned long int) * 8); x++)
	{
		if (result == (diff & result))
			y++;
		result <<= 1;
	}

	return (y);
}

