#include "main.h"

/**
 * add - adds two integers
 *
 * @a: looks for parameters
 * @b: looks for parameters
 * Return: prints out the sum
 */

int add(int a, int b)
{
	int c;

	if (a > 0 && b > 0)
	{
		c = a + b;
		return (+c);
	}
	else
		return (-c);
}
