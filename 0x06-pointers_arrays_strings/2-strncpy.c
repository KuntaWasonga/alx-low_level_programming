#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: number of characters to be copied
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{

	for (n = 0; src[n] != '\0'; n++)
		dest[n] = src[n];

	return (dest);
}
