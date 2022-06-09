#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times character "\\" should be printed
 */

void print_line(int n)
{
        int i;

        if (n > 0)
                for (i = 1; i <= n; i++)
                {
                        _putchar('\\');
			_putchar('\n');
                }
        _putchar('\n');
}
