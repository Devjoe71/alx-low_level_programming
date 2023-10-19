#include "main.h"
/**
 * leet - encodes a string into 1337
 * @c: string to be encoded
 * Return: zero
 */

char *leet(char *c)
{
	int n, m;
	char *k = "aAeEoOtTlL";
	char *l = "4433007711";

	for (n = 0; c[n] != '\0'; n++)
	{
		for  (m = 0; m < 10; m++)
		{
			if (c[n] == k[m])
				c[n] = l[m];
		}
	}
	return (c);
}

