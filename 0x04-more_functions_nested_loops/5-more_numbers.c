#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14.
 */

void more_numbers(void)
{
	int i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}

	_putchar('\n');
}
