#include "main.h"

/**
 * _strcpy - function that copies string to the buffer
 * @dest: destination address
 * @src: original address
 * Return: returns the pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int i, len = 0;

	while (src[len]  != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
