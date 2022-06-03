#include<stdio.h>
/*
 * Main - Entry point
 *
 * Return - Always 0 (success)
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
