#include <stdio.h>

/**
 * main - print all single digit num of base 10 from 0
 *
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
