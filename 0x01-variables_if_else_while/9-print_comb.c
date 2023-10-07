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
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
