#include "main.h"

/*
 * swap - fucntion that swaps the values of two integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
