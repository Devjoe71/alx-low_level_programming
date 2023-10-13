#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: checks for parameters
 *
 * Return: zero
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, m;

		for (i = 1; i <= n; i++)
		{
			for (m = 1; m <= i; m++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
