#include "main.h"

/**
 * print_rev - functions that prints a string in reverse followed by a new line
 * @s: string to be evaluated
 *
 */

void print_rev(char *s)
{
	char tmp;
	int i, l, rind;

	l = _strlen(s);

	rind = l - 1;

	for(i = 0; i < rind; i++)
	{
		tmp = s[i];
		s[i] = s[rind];
		s[rind] = tmp;
		rind--;
		_putchar(tmp);
	}
	_putchar('\n');
}
