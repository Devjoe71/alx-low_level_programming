#include "main.h"
/**
 * print_square - prints a square followed by square
 *
 * @size: checks for parameters
 * Return: zero
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int n, m;

		for (n = 0; n < size; n++)
		{
			for (m = 0; m < size; m++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

