#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function
 * @array: pointer to size
 * @action: pointer to a function
 * @size: this is size of our array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (array == NULL || action == NULL)
		return;
	while (x < size)
	{
		action(*array);
		array++;
		x++;
	}
}
