#include "main.h"
/**
 * print_number - prints an integer
 * @n: elements to be printed
 * Return: in our case it will return zero
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n / 10 != 0)
		_putchar('n / 10');
	else
		_putchar(n % 10) + '0');
}
