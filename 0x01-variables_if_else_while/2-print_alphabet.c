#include <stdio.h>

/**
 * main - Program that print alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	putchar('\n');

	return (0);
}
