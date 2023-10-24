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
	int i;
	int s1 = 0;
	int s2 = 0;

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
	printf("%d, %d\n", s1, s2);
}
