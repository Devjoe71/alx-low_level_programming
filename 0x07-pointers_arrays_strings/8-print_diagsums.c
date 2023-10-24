#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of square matrix
 * @a: pointer
 * @size: size of integer
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}
	printf("%d, %d", s1, s2);
}
