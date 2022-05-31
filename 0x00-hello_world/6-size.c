#include<stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 * 
 */
int main(void)
{
	char charType;
	int intType;
	long int LongIntType;
	long long int LongLongIntType;
	float floatType;
	printf("Size of char: %d byte(s)\n", sizeof(charType));
	printf("Size of int: %d byte(s)\n", sizeof(intType));
	printf("Size of long int: %d byte(s)\n", sizeof(LongIntType));
	printf("Size of long long int: %d byte(s)\n", sizeof(LongLongIntType));
	printf("Size of float: %d byte(s)\n", sizeof(floatType));
	return (0);
}                        
