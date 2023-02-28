#include "main.h"
/**
 * _strlen -  a function that returns the length of a string
 * @s: char to check
 * Return: 0
 */

int _strlen(char *s)
{
	int index = 0;

	for (; *s++;)
		index++;
	return (index);
}
