#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @c: string to be capitalized
 * Return: zero
 */

char *cap_string(char *c)
{
	int i;
	char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && c[i] >= 'a' && c[i] <= 'z')
			c[i] = c[i] - 32;
	}
	return (c);
}
