#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints number
 * @separator: string to be printed
 * @n: number of elements
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0;
	va_list s_string;

	va_start(s_string, n);
	while (x < n)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(s_string, int));
		}
		else
		{
			printf("%d", va_arg(s_string, int));
			if (x != n - 1)
				printf("%s", separator);
		}
		x++;
	}
	printf("\n");
	va_end(s_string);
}
