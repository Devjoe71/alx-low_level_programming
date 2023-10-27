#include "main.h"
#include <string.h>
/**
 * _strpbrk -  searches  a string for any set of byte
 * @s: where the search is done
 * @accept: where the comparison is done
 * Return: return null if no comparison
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
