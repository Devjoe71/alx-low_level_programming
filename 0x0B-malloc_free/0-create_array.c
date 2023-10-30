#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of chars
 * @size: slots to be created
 * @c: number of elements to be stored
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *array;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (n = 0; n < size; n++)
		array[n] = c;
	return (array);
}
