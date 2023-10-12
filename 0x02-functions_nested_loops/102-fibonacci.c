#include<stdio.h>
/**
 * main - prints the first 50 fibonacci numbers starting from 1 and 2
 *
 * Return: zero
 */

int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int m;
	int n;

	printf("%lu, ", i);
	for (n = 1; n < 50; n++)
	{
		printf("%lu", j);
		m = i + j;
		i = j;
		j = m;
		if (n != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
