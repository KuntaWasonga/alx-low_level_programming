#include "main.h"

/**
 * print_last_digit - prints last digit of number
 * @n: variable whose last digit is to be printed
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int l;

	if (n < 0)
		n = -n;

	l = n % 10;
	return (l);
}
