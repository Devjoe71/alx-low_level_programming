#include "main.h"
/**
 * factorial - prints factorial
 * @n: parameter
 * Return: -1 if n is less than zero
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		n = n * factorial(n - 1);
	return (n);
}
