#include<stdio.h>
/**
 * main - prints the lowercase alphabet in reverse, followed by a new line.
 *
 * return - Always 0 (success)
 */
int main(void)
{
		int i;

		for (i = 'z' ; i >= 'a' ; i--)
		{
			printf("%c", i);
		}
		printf("\n");
		return (0);
}
