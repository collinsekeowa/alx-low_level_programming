#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
	int num;
	char lh;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');
	for (lh = 'a'; lh <= 'f'; lh++)
		putchar(lh);

	putchar("\n");

	return (0);
}
