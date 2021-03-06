#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that works like a calculator
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: returns 0 always on success
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if ((num2 == 0 && *op == '%') || (num2 == 0 && *op == '/'))
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
