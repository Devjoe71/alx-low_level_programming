#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - sums all the parameters
 * @n: number of parameters
 * Return: 0 when n==0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x = 0;
	va_list my_number;

	if (n == 0)
		return (0);
	va_start(my_number, n);
	while (x < n)
	{
		sum = sum + va_arg(my_number, int);
		x++;
	}
	va_end(my_number);
	return (sum);
}
