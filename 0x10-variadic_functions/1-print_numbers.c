#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));

			if (i != n - 1)
			{
				printf("%c ", *separator);
			}
		}
		printf("\n");
	}
	va_end(ap);
}
