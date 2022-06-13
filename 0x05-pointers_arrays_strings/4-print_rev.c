#include "main.h"

/**
 * print_rev - functions that prints a string in reverse followed by a new line
 * @s: string to be evaluated
 */

void print_rev(char *s)
{
	int i, j, length;

/* Determines length of string*/
	while (s[i] != '\0')
		i++;

	length = i;
/*
 * Gets characters in string one by one then swaps to the last
 * and begins printing in reverse
 */
	for (j = length - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
