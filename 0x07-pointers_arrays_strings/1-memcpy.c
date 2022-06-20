#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: destination area
 * @src: source area
 * @n: number of bytes to be copied
 * Return: returns a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (*dest);
}
