#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: returns pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	while (dest[length] != '\0')
		length++;

	for (i = 0; src[i] != '\0'; i++, length++)
		dest[length] = src[i];

	dest[length] = '\0';

	return (dest);
}
