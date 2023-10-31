#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: horizontal side
 * @height: vertical side
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **op;
	int i, n;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	op = malloc(sizeof(int *) * height);/** allocates memory for the row*/
		if (op == NULL)
			return (NULL);
	for (i = 0; i < height; i++)
	{
		op[i] = malloc(sizeof(int) * width);
		if (op[i] == NULL)
		{
			free(op);
			for (n = 0; n == height; n++)
				free(op[n]);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			op[i][n] = 0;
	}
	return (op);
}
