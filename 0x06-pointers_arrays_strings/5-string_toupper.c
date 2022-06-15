#include "main.h"

/**
 * string_toupper - function that converts string to upper case
 * @str: string to be evaluated
 * Return: returns string in upper case
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
