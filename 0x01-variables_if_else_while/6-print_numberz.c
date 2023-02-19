#include <stdio.h>

/**
 * main - print all single digit num of base 10
 * no usage of any variable of type char
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
