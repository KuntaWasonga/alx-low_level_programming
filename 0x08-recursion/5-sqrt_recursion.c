#include "main.h"

/**
 * find_sqrt - Finds the natural square root of a number
 * @num: number whose square root is to be found
 * @root: the root to be rested
 *
 * Return: if natural square root is persent it returns the root
 *	if it doesn't have a root, it returns -1.
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number whose square root is to be found
 * Return: matural square root is returned
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
