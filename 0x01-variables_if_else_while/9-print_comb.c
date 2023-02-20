#include <stdio.h>

/**
 * main - prints all combination of single digits
 * you can only use 4 putchar function
 * Return: 0
 */

int main(void)
{
	int csd;

	for (csd = 48; csd <= 57; csd++)
	{
		putchar(csd);

		if (csd != 57)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');
	return (0);
}
