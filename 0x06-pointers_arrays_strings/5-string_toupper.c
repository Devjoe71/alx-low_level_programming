#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @c: strings
 * Return: uppercase
 */

char *string_toupper(char *c)
{
	int m;

	for (m = 0; c[m] != '\0'; m++)
	{
		if (c[m] >= 'a' && c[m] <= 'z')
			c[m] = c[m] - 32;
	}
	return (c);
}
