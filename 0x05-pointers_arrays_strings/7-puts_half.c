#include "main.h"

/**
 * puts_half - function that prints half of a string followed by a new line
 * @str: string to be evaluated
 */

void puts_half(char *str)
{
	int i, len, n1, n2;

	len = 0;

	while (str[len] != '\0')
		len++;

	n = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = len - 1; i >= n; i--)
			_putchar(str);
	}
	else
	{
		for (i = len - 1; i > n - 1; i--)
			_putchar(str);
	}

	_putchar('\n');
}
