#include<stdio.h>
/**
 * main - prints the sum of the even-valued terms
 *
 * Return: zero
 */

int main(void)
{
	int max = 4000000;
	int i;
	int j;
	int n;
	int sum = 2;

	while (n <= max)
	{
		n = i + j;
		if (n % 2 == 0)
			sum = sum + n;
		i = j;
		j = n;
	}
	printf("%d\n", sum);
	return (0);
}
