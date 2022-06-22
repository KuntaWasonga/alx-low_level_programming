#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: number whose factorial is to be determined
 * Return: if lower than 0, return -1 for error and value if successful
 */

int factorial(int n)
{
	int fac = n;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	fac *= factorial(n - 1);

	return (fac);
}
