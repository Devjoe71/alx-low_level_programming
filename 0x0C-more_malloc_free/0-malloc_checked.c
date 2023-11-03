#include "main.h"
#include <stdlib.h> /* for using malloc*/
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: an integer that represents size of memory
 * Return: pointer to the memory llocated
 */
void *malloc_checked(unsigned int b)
{
	char *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	else
		return (pt);
}
