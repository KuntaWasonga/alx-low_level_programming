#include <stdio.h>
/*
 * main - prints numbers 0-9 without using char
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0' ; n < '10' ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
