#include "main.h"
/**
 * _memcpy - cpoies memory area
 * @dest: destination to where  copied elements to be stored
 * @src: source to be copied from
 * @n: number of elements to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
