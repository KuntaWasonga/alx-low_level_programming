#include "main.h"

/**
 * print_rev - functions that prints a string in reverse followed by a new line
 * @s: string to be evaluated
 */

void print_rev(char *s)
{
	char tmp;
	int i = 0, l = 0, rind;

/* Determines length of string*/
	while (s[i])
		l++;

/*
 * Gets characters in string one by one then swaps to the last
 * and begins printing in reverse
 */
	for (i = 0; i < l - 1; i++)
	{
		tmp = s[i];
		s[i] = s[rind];
		s[rind] = tmp;
		rind--;
		_putchar(tmp);
	}
	_putchar('\n');
}
