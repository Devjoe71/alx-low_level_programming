#include<stdio.h>
/**
 * main - prints the sum of all multiples of 3 0r 5 below 1024
 *
 * Return: zero
 */
int main(void)
{
	int m = 0;

	int sum = 0;

	while (m < 1024)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			sum = sum + m;
			m++;
		}
	}
	printf("%d\n", sum);
	return (0);


}
