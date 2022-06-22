#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: original value
 * @y: power to be raised to
 * Return: -1 if y is lower than 0 and product if successful
 */

int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	power *= _pow_recursion(x, y - 1);
	return (power);
}
