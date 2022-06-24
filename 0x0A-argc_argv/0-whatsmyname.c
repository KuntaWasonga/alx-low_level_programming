#include <stdio.h>

/**
 * main - function that prints its name followed by a new line
 * @argc: argument count
 * @argv: argument value
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
