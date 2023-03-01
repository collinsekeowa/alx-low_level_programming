#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: char to check
 * Return: 0
 */

void rev_string(char *s)
{
	int index1 = 0, index2, index3;
	char index4;

	while (s[index1] != '\0')
	{
		index1++;
	}

	index3 = index1 - 1;
	for (index2 = 0; index3 >= 0 && index2 < index3; index3--, index2++)
	{
		index4 = s[index2];
		s[index2] = s[index3];
		s[index3] = index4;
	}
}
