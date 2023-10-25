#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer to the string
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_strlen_recursion(++s);
		_putchar(*s);
	}
	return (s);
}
