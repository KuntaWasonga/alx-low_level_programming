#include <stdio.h>

/**
 * main - function that prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument value
 * Return: 0 is always success
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
