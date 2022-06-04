#include <stdio.h>
/**
 * main - prints numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
