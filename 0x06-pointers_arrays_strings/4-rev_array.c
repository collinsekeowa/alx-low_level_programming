#include "main.h"

/**
 * reverse_array - function that reverse array contents
 * @a: array
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, ct;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		ct = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = ct;
	}
}
