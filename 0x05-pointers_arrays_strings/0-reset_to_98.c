#include "main.h"

/*
 * reset_to_98 - Function that takes a pointer to an int and updates
 * the value it points to 98.
 * @n: parameter
 * Return: the value of the *n variable
 */

void reset_to_98(int *n)
{
	int m;

	m = 98;

	*n = m;
}
