#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be taken from src
 * Return: returnss a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[i++])
		length++;

	for (i = 0; src[i] && i < n; i++)
		dest[length++] = src[i];

	return (dest);
}
