#include "main.h"
#include<string.h>
/**
 * _strlen - returns the length of a string
 * @s: it is apointer
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int l;
	int c = 0;

	for (l = 0; s[l] != '\0'; l++)
		c++;
	return (c);
}
