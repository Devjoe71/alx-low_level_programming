#include<stdio.h>
/**
 * main - prints out numbers in ascending order separated by commas
 *
 * Return: in our case it returns zero
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{	putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
