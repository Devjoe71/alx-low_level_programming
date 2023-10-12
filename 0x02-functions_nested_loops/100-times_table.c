#include "main.h"
#include<stdio.h>

/**
 * print_times_table - prints the n times table
 *
 * @n: looks for integers
 *
 * Return: returns the value 0
 */

void print_times_table(int n)
{	int i;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i < 15; i++)
	{
		printf("%d * %d = %d\n", i, n, i * n);
	}
}
