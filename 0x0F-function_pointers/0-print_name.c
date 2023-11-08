#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints out name
 * @name: name to be printed
 * @f: this is a function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	f(name);
}
