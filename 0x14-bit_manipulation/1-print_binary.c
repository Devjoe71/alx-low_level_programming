#include "main.h"
/**
 *  _pow-function calculates base power
 *  @base: base of the number
 *  @power: power of the number
 *  Return: the value of base power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
		number *= base;
	return (number);
}

/**
 * print_binary - prints a number in binary notation
 *  @n: number to be printed
 *  Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int div;
	unsigned long int check;
	char fl;

	fl = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;
		if (check == div)
		{
			fl = 1;
			_putchar('1');
		}
		else if (fl == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
