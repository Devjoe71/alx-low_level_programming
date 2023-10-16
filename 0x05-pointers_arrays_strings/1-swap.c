#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: its a pointer to value a
 * @b: its a pointer to value b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
