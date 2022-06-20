#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: the string to be scanned
 * @accept: the string containing the character to match
 * Return: returns pointer to the matching byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *str1 != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			if (*str1 == str2[j])
			{
				return (str1);
			}
		}
		str1++;
	}
	return (NULL);
}
