#include "main.h"
/**
 * _strspn - gets the length of the prefix
 * @s:search from here
 * @accept:in this string is where it searches
 * Return: Number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int n, m;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; s[n] != accept[m]; m++)
		{
			if (accept[m] == '\0')
				return (n);
		}
	}
	return (0);
}
