#include<stdio.h>
/**
 * main - prints out double numbers with a comma and space
 *
 * Return: in our case it rturns zero
 */

int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 48 || j != 49)
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
