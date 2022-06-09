#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: number of times character "_" should be printed
 */

void print_square(int size)
{
        int i, j;

        if (size > 0)
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
        _putchar('\n');
}
