#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: argument count
 * @argv: argument values
 *
 * Return: returns 0 if success
 */

int main(int argc, char *argv[])
{
	int i, num, add;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);

			if (num == 0)
			{
				printf("Error\n");
				return (1);
			}
			else if (num >= 0)
			{
				add += num;
			}
		}
		printf("%d\n", add);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
