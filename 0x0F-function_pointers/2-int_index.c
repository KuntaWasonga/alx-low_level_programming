#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array of integers
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: returns index for first element which cmp function does not
 *	return 0;
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
