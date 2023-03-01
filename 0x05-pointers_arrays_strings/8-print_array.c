#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * Numbers must be separated by comma,
 * @a: int to check
 * @n: int to check
 * Return: 0
 */

void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		if (e != n - 1)
			printf("%d, ", a[e]);
		else
			printf("%d", a[e]);
	}
	printf("\n");
}

