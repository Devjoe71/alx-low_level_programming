#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int sz = (max - min) + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * sz);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min++;
		i++;
	}

	return (ptr);
}
