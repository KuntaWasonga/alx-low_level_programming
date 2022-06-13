#include "main.h"

/**
 * void rev_string(char *s)
 * @s: string to be evaluated
 *
 */

void rev_string(char *s)
{
	char *r = s;
	
	while (*(r + 1) != '\0')
		r++;

	while (r > s)
	{
		char tmp = *r;
		*r-- = *s;
		*s++ = tmp;
	}	
}
