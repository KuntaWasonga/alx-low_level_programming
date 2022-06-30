#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: intended minimum number
 * @max: intended maximum number
 *
 * Return: returns the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *s, n, i;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	s = malloc(n * sizeof(int));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		s[i] = min++;
	}

	return (s);
}
