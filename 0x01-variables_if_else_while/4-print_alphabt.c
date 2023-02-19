#include <stdio.h>

/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: 0
 */

int main(void)
{
	char le;

	for (le = 'a'; le <= 'z'; le++)
	{
		if (le != 'q' && le != 'e')
			putchar(le);
	}

	putchar('\n');

	return (0);
}
