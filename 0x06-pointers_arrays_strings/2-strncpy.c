#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: whatever is in src is copied here
 * @src: elements in here are copied to dest
 * @n: elements to be coupied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m;

	for (m = 0; m < n && src[m] != '\0'; m++)
		dest[m] = src[m];
	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}
	return (dest);
}
