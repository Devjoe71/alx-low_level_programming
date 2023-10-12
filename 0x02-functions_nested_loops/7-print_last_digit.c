#include "main.h"

/**
 * print_last_digit - prints out the last digit of a number
 *
 * @j: looks for parameter
 * Return: returns the last value of a digit
 */

int print_last_digit(int j)
{
	int i;

	i = j % 10;
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
