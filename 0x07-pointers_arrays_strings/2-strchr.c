#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the string in which the search is happening
 * @c: character in the string being searched for
 * Return: returns a pointer to first occurrrence of character or
 *	NULL if character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
