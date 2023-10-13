#include "main.h"
/**
 * print_numbers - prints number 0-9
 *
 * Return: zero in our case
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
