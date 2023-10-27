#include "main.h"
/**
 * _memset - fills the memory with constant byte
 * @s: pointers to where b will be stored
 * @b: value to be stored
 * @n: number of elements
 * Return: returns pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	return (s);
}
