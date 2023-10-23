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
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s);
		}
	}
	return (NULL);
}
