#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index -function that searches for integer
 * @array: target array that holds int
 * @size: number of elements
 * @cmp: pointer to a function to be used to compare
 * Return: -1 if size is equal or less than zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (x < size)
	{
		if (cmp(array[x]) != 0)
			return (x);
		x++;
	}
	return (-1);
}
