#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string to be evaluated.
 * Return: returns value i.
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);

}
