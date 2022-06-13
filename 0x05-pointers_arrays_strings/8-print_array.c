#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array
 * @a: array
 * @n: number of elements in the array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}

	printf("\n");
}
