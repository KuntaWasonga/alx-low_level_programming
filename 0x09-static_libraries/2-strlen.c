#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 * @s: string to be evaluated.
 * Return: returns length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
