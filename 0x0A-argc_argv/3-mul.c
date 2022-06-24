#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: argument value
 *
 * Return: returns 0 if success and 1 if error
 */

int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc - 1 == 2)
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;

		printf("%d\n", mul);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
