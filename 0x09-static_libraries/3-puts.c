#include "main.h"
/**
 * _puts - prints a string
 * @str: it's a pointer
 * Return: void
 */

void _puts(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
