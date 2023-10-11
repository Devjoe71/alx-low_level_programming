#include "main.h"

/**
 * print_sign - prints the sign of the number
 *
 * @n: checks the parameters involved.
 *
 * Return: returns 1 if >0 else if 0 == 0 else -1 <0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
