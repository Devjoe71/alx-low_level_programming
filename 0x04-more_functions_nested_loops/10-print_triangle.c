#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 *
 * @size: prints the size
 *
 * Return: void
 */

void print_triangle(int size)
{
	if  (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i != j)
					_putchar(' ');
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
