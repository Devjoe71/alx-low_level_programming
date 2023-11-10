#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 *  print_strings - prints string
 *  @separator: this is a string
 *  @n: number of strings passed to the func
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list vf;
	va_start(vf, n);
	while (i < n)
	{
		char *c = va_arg(vf, char *);

		if (c == NULL)
			printf("(nil)");
		else
		{
			printf("%s", c);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(vf);
}
