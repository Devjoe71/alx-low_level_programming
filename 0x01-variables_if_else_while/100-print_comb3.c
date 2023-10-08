#include<stdio.h>
/**
 * main - prints out double numbers with a comma and space
 *
 * Return: in our case it rturns zero
 */

int main(void)
{
	int i, j;

	for (i = 20; i <= 30; i++)
	{
		for (j = 21; j <= 31; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 30 || j != 31)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
